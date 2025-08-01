# 1 "c:\\vugen\\qm_servizi_inserimento\\\\combined_QM_Servizi_Inserimento.c"
# 1 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);
char *   lr_encrypt_ex (const char *plaintext);
char *   lr_decrypt_ex (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 515 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 518 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 542 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 576 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 599 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 623 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 702 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 763 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 778 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 802 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 814 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 822 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 828 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 933 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 940 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 962 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1038 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1067 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"


# 1079 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 







int   lr_cyberark_get_vault(char * first_param, ...);
int   lr_cyberark_get_vault_no_ellipsis(const char* first_param, char** arguments, int argCount);

 
 
 
 
 







int   lr_aws_get_secret(char * first_param, ...);
int   lr_aws_get_secret_no_ellipsis(const char* first_param, char** arguments, int argCount);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\vugen\\qm_servizi_inserimento\\\\combined_QM_Servizi_Inserimento.c" 2

# 1 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\vugen\\qm_servizi_inserimento\\\\combined_QM_Servizi_Inserimento.c" 2

# 1 "globals.h" 1
# 1 "C:\\Program Files (x86)\\OpenText\\Virtual User Generator\\include/TruClient2.h" 1
# 1 "globals.h" 2

# 3 "c:\\vugen\\qm_servizi_inserimento\\\\combined_QM_Servizi_Inserimento.c" 2

# 1 "C-functions.c" 1
 
 
 
 
 
 
 
void main()
{
	
}
# 4 "c:\\vugen\\qm_servizi_inserimento\\\\combined_QM_Servizi_Inserimento.c" 2

# 1 "AggiungiServizio.c" 1
 
 
 

AggiungiServizio()
{
	truclient_step("1", "Click on Servizi Link", "snapshot=AggiungiServizio_1.inf");
	truclient_step("3", "Click on Aggiungi servizio Link", "snapshot=AggiungiServizio_3.inf");
	return 0;
}
# 5 "c:\\vugen\\qm_servizi_inserimento\\\\combined_QM_Servizi_Inserimento.c" 2

# 1 "DatiTecnici.c" 1
 
 
 

DatiTecnici()
{
	truclient_step("3", "Click on Dati tecnici Link", "snapshot=DatiTecnici_3.inf");
	truclient_step("5", "Click on Button(Minimo passeggeri +) Button", "snapshot=DatiTecnici_5.inf");
	truclient_step("6", "Click on Button(Minimo passeggeri +) Button", "snapshot=DatiTecnici_6.inf");
	truclient_step("8", "Click on Button(Massimo passeggeri +) Button", "snapshot=DatiTecnici_8.inf");
	truclient_step("9", "Click on Button(Massimo passeggeri +) Button", "snapshot=DatiTecnici_9.inf");
	truclient_step("10", "Double click on Button(Massimo passeggeri +) Button", "snapshot=DatiTecnici_10.inf");
	truclient_step("11", "Click on Button(Massimo passeggeri +) Button", "snapshot=DatiTecnici_11.inf");
	truclient_step("12", "Click on Button(Massimo passeggeri +) Button", "snapshot=DatiTecnici_12.inf");
	truclient_step("14", "Click on Label(Abilita Infant) Label", "snapshot=DatiTecnici_14.inf");
	truclient_step("15", "Click on Età minima TextBox", "snapshot=DatiTecnici_15.inf");
	truclient_step("16", "Type 0 in Età minima TextBox", "snapshot=DatiTecnici_16.inf");
	truclient_step("17", "Click on Età massima TextBox", "snapshot=DatiTecnici_17.inf");
	truclient_step("18", "Type 4 in Età massima TextBox", "snapshot=DatiTecnici_18.inf");
	truclient_step("20", "Click on Label(Abilita Child) Label", "snapshot=DatiTecnici_20.inf");
	truclient_step("21", "Click on Età minima TextBox", "snapshot=DatiTecnici_21.inf");
	truclient_step("22", "Type 5 in Età minima TextBox", "snapshot=DatiTecnici_22.inf");
	truclient_step("23", "Click on Età massima TextBox", "snapshot=DatiTecnici_23.inf");
	truclient_step("24", "Type 10 in Età massima TextBox", "snapshot=DatiTecnici_24.inf");
	truclient_step("26", "Click on Label(Abilita Teen) Label", "snapshot=DatiTecnici_26.inf");
	truclient_step("27", "Click on Età minima TextBox", "snapshot=DatiTecnici_27.inf");
	truclient_step("28", "Type 11 in Età minima TextBox", "snapshot=DatiTecnici_28.inf");
	truclient_step("29", "Click on Età massima TextBox", "snapshot=DatiTecnici_29.inf");
	truclient_step("30", "Type 16 in Età massima TextBox", "snapshot=DatiTecnici_30.inf");
	truclient_step("32", "Click on Button(+ Italiano) Button", "snapshot=DatiTecnici_32.inf");
	truclient_step("34", "Click on Conferma modifiche Button", "snapshot=DatiTecnici_34.inf");
	truclient_step("36", "Click on Aggiungi nuovo dato Button", "snapshot=DatiTecnici_36.inf");
	truclient_step("38", "Click on Demo Simple Select Focusable", "snapshot=DatiTecnici_38.inf");
	truclient_step("40", "Click on Trasporto ListItem", "snapshot=DatiTecnici_40.inf");
	truclient_step("42", "Click on Traduci nelle altre lingu... TextBox", "snapshot=DatiTecnici_42.inf");
	truclient_step("43", "Type prova in Traduci nelle altre lingu... TextBox", "snapshot=DatiTecnici_43.inf");
	truclient_step("45", "Click on Conferma Button", "snapshot=DatiTecnici_45.inf");
	return 0;
}
# 6 "c:\\vugen\\qm_servizi_inserimento\\\\combined_QM_Servizi_Inserimento.c" 2

# 1 "GeneraVendita.c" 1
 
 
 

GeneraVendita()
{
	truclient_step("6", "Click on Costi Link", "snapshot=GeneraVendita_6.inf");
	truclient_step("8", "Click on Genera vendita Button", "snapshot=GeneraVendita_8.inf");
	truclient_step("9", "GroupStep.Mouseover", "snapshot=GeneraVendita_9.inf");
	{
		truclient_step("9.1", "Move mouse over RadioGroup(2) RadioGroup", "snapshot=GeneraVendita_9.1.inf");
	}
	truclient_step("10", "Click on Genera vendita RadioGroup", "snapshot=GeneraVendita_10.inf");
	truclient_step("12", "Click on Genera vendita Button", "snapshot=GeneraVendita_12.inf");
	truclient_step("14", "Verify if € 134,00 Element's VisibleText Contain € 134,00", "snapshot=GeneraVendita_14.inf");
	truclient_step("15", "Verify if € 0,00 Element's VisibleText Contain € 0,00", "snapshot=GeneraVendita_15.inf");
	truclient_step("16", "Verify if € 67,00 Element's VisibleText Contain € 67,00", "snapshot=GeneraVendita_16.inf");
	truclient_step("17", "Verify if € 107,20 Element's VisibleText Contain € 107,20", "snapshot=GeneraVendita_17.inf");
	return 0;
}
# 7 "c:\\vugen\\qm_servizi_inserimento\\\\combined_QM_Servizi_Inserimento.c" 2

# 1 "RicercaServizio.c" 1
 
 
 

RicercaServizio()
{
	truclient_step("2", "Click on Servizi Link", "snapshot=RicercaServizio_2.inf");
	truclient_step("4", "Click on Codice TextBox", "snapshot=RicercaServizio_4.inf");
	truclient_step("5", "Type Partec_Inserime in Codice TextBox", "snapshot=RicercaServizio_5.inf");
	truclient_step("7", "Click on Cerca servizi Button", "snapshot=RicercaServizio_7.inf");
	truclient_step("9", "Click on Partec Inserime Link", "snapshot=RicercaServizio_9.inf");
	truclient_step("11", "Verify if Argentina e Cile Focusable's VisibleText Contain Argentina e Cile", "snapshot=RicercaServizio_11.inf");
	truclient_step("12", "Verify if Codice * TextBox's VisibleText Contain Partec_Inserime", "snapshot=RicercaServizio_12.inf");
	truclient_step("13", "Verify if Individuale Focusable's VisibleText Contain Individuale", "snapshot=RicercaServizio_13.inf");
	truclient_step("14", "Verify if Nome * TextBox's VisibleText Contain Partec_Inserime", "snapshot=RicercaServizio_14.inf");
	truclient_step("15", "Verify if Aladyn Quality Group Button's VisibleText Contain Aladyn Quality Group", "snapshot=RicercaServizio_15.inf");
	truclient_step("16", "Verify if Trasferimento Focusable's VisibleText Contain Trasferimento", "snapshot=RicercaServizio_16.inf");
	truclient_step("18", "Click on Dati tecnici Link", "snapshot=RicercaServizio_18.inf");
	truclient_step("19", "Verify if Età minima partecipanti TextBox's VisibleText Contain 0", "snapshot=RicercaServizio_19.inf");
	truclient_step("20", "Verify if Minimo passeggeri TextBox's VisibleText Contain 2", "snapshot=RicercaServizio_20.inf");
	truclient_step("21", "Verify if Massimo passeggeri TextBox's VisibleText Contain 5", "snapshot=RicercaServizio_21.inf");
	truclient_step("22", "Verify if Età minima TextBox's VisibleText Contain 0", "snapshot=RicercaServizio_22.inf");
	truclient_step("23", "Verify if Età massima TextBox's VisibleText Contain 4", "snapshot=RicercaServizio_23.inf");
	truclient_step("24", "Verify if Età minima TextBox's VisibleText Contain 5", "snapshot=RicercaServizio_24.inf");
	truclient_step("25", "Verify if Età massima TextBox's VisibleText Contain 10", "snapshot=RicercaServizio_25.inf");
	truclient_step("26", "Verify if Età minima TextBox's VisibleText Contain 11", "snapshot=RicercaServizio_26.inf");
	truclient_step("27", "Verify if Età massima TextBox's VisibleText Contain 16", "snapshot=RicercaServizio_27.inf");
	truclient_step("28", "Verify if Italiano Button's VisibleText Contain Italiano", "snapshot=RicercaServizio_28.inf");
	truclient_step("29", "Verify if Trasporto Focusable's VisibleText Contain Trasporto", "snapshot=RicercaServizio_29.inf");
	truclient_step("31", "Click on Descrizione Link", "snapshot=RicercaServizio_31.inf");
	truclient_step("33", "Verify if prova TextBox's VisibleText Contain prova", "snapshot=RicercaServizio_33.inf");
	truclient_step("34", "Verify if prova TextBox's VisibleText Contain prova", "snapshot=RicercaServizio_34.inf");
	truclient_step("35", "Verify if prova TextBox's VisibleText Contain prova", "snapshot=RicercaServizio_35.inf");
	truclient_step("36", "Verify if prova TextBox's VisibleText Contain prova", "snapshot=RicercaServizio_36.inf");
	truclient_step("37", "Verify if Aconcagua Button's VisibleText Contain Aconcagua", "snapshot=RicercaServizio_37.inf");
	truclient_step("39", "Click on Costi Link", "snapshot=RicercaServizio_39.inf");
	truclient_step("42", "Verify if Partec Inserime Link's VisibleText Contain Partec_Inserime", "snapshot=RicercaServizio_42.inf");
	truclient_step("43", "Verify if 300801 Element's VisibleText Contain DULAC AG", "snapshot=RicercaServizio_43.inf");
	truclient_step("44", "Verify if (Default) 4 Focusable's VisibleText Contain (Default)4", "snapshot=RicercaServizio_44.inf");
	truclient_step("45", "Verify if (Default) 10 Element's VisibleText Contain (Default)10", "snapshot=RicercaServizio_45.inf");
	truclient_step("46", "Verify if (Default) 16 Element's VisibleText Contain (Default)16", "snapshot=RicercaServizio_46.inf");
	truclient_step("47", "Verify if EUR Focusable's VisibleText Contain EUR", "snapshot=RicercaServizio_47.inf");
	truclient_step("48", "Verify if 0% Element's VisibleText Contain 0%", "snapshot=RicercaServizio_48.inf");
	truclient_step("49", "Verify if 34% Element's VisibleText Contain 34%", "snapshot=RicercaServizio_49.inf");
	truclient_step("51", "Click on Vendita Link", "snapshot=RicercaServizio_51.inf");
	truclient_step("53", "Verify if € 134,00 Element's VisibleText Contain € 134,00", "snapshot=RicercaServizio_53.inf");
	truclient_step("54", "Verify if € 0,00 Element's VisibleText Contain € 0,00", "snapshot=RicercaServizio_54.inf");
	truclient_step("55", "Verify if € 67,00 Element's VisibleText Contain € 67,00", "snapshot=RicercaServizio_55.inf");
	truclient_step("56", "Verify if € 107,20 Element's VisibleText Contain € 107,20", "snapshot=RicercaServizio_56.inf");
	return 0;
}
# 8 "c:\\vugen\\qm_servizi_inserimento\\\\combined_QM_Servizi_Inserimento.c" 2

