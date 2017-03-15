---
title: "Utilizzo delle funzioni di accesso dinamiche | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni di accesso [C++], dinamiche"
  - "funzioni di accesso dinamiche"
ms.assetid: e5d5bfa6-2b1d-49d0-8ced-914666422431
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Utilizzo delle funzioni di accesso dinamiche
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Le funzioni di accesso dinamiche consentono di accedere a un'origine dati quando non si conosce lo schema del database, ovvero la struttura sottostante.  Nella libreria di modelli OLE DB sono disponibili numerose classi che possono agevolare questa operazione.  
  
 Nell'esempio [DynamicConsumer](http://msdn.microsoft.com/it-it/2ccc4c61-6749-4e83-aa81-00f8009c0dc3) viene mostrato come utilizzare le classi delle funzioni di accesso dinamiche per ottenere informazioni di colonna e creare le funzioni di accesso in modo dinamico.  
  
## Utilizzo di CDynamicAccessor  
 [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) consente di accedere a un'origine dati quando non si conosce lo schema del database, ovvero la struttura sottostante del database.  I metodi `CDynamicAccessor` ottengono informazioni relative alle colonne, ad esempio i nomi, il conteggio e il tipo di dati.  Tali informazioni di colonna vengono utilizzate per la creazione dinamica di una funzione di accesso in fase di esecuzione.  Le informazioni di colonna sono memorizzate in un buffer che viene creato e gestito da questa classe.  Si ottengono quindi i dati dal buffer tramite il metodo [GetValue](../../data/oledb/cdynamicaccessor-getvalue.md).  
  
## Esempio  
  
### Codice  
  
```  
// Using_Dynamic_Accessors.cpp  
// compile with: /c /EHsc  
#include <stdio.h>  
#include <objbase.h>  
#include <atldbcli.h>  
  
int main( int argc, char* argv[] )  
{  
    HRESULT hr = CoInitialize( NULL );  
  
    CDataSource ds;  
    CSession ss;  
  
    CTable<CDynamicAccessor> rs;  
  
    // The following is an example initialization string:  
    hr = ds.OpenFromInitializationString(L"Provider=SQLOLEDB.1;"  
      L"Integrated Security=SSPI;Persist Security Info=False;"  
      L"Initial Catalog=Loginname;Data Source=your_data_source;"  
      L"Use Procedure for Prepare=1;Auto Translate=True;"  
      L"Packet Size=4096;Workstation ID=LOGINNAME01;"  
      L"Use Encryption for Data=False;"  
      L"Tag with column collation when possible=False");  
  
    hr = ss.Open( ds );  
    hr = rs.Open( ss, "Shippers" );  
  
    hr = rs.MoveFirst( );  
    while( SUCCEEDED( hr ) && hr != DB_S_ENDOFROWSET )  
    {  
        for( size_t i = 1; i <= rs.GetColumnCount( ); i++ )  
        {  
            DBTYPE type;  
            rs.GetColumnType( i, &type );  
            printf_s( "Column %d [%S] is of type %d\n",  
                      i, rs.GetColumnName( i ), type );   
  
            switch( type )  
            {  
                case DBTYPE_WSTR:  
                    printf_s( "value is %S\n",  
                              (WCHAR*)rs.GetValue( i ) );  
                break;  
                case DBTYPE_STR:  
                    printf_s( "value is %s\n",  
                              (CHAR*)rs.GetValue( i ) );  
                default:  
                    printf_s( "value is %d\n",  
                              *(long*)rs.GetValue( i ) );  
            }  
        }  
        hr = rs.MoveNext( );  
    }  
  
    rs.Close();     
    ss.Close();  
    ds.Close();  
    CoUninitialize();  
  
    return 0;  
}  
```  
  
## Utilizzo di CDynamicStringAccessor  
 [CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md) funziona in modo analogo a [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md), tranne per un particolare importante.  Mentre `CDynamicAccessor` richiede i dati nel formato nativo indicato dal provider, `CDynamicStringAccessor` richiede al provider di recuperare tutti i dati dall'archivio dati in formato stringa.  Questa soluzione è particolarmente utile per eseguire semplici attività che non richiedono calcoli di valori nell'archivio dati, quali la visualizzazione o la stampa del contenuto dell'archivio dati.  
  
 Utilizzare i metodi di `CDynamicStringAccessor` per ottenere le informazioni di colonna.  Tali informazioni di colonna vengono utilizzate per la creazione dinamica di una funzione di accesso in fase di esecuzione.  Le informazioni di colonna sono memorizzate in un buffer che viene creato e gestito da questa classe.  Per ottenere i dati dal buffer, utilizzare [CDynamicStringAccessor::GetString](../../data/oledb/cdynamicstringaccessor-getstring.md). Per memorizzare dati nel buffer, utilizzare [CDynamicStringAccessor::SetString](../../data/oledb/cdynamicstringaccessor-setstring.md).  
  
## Esempio  
  
### Codice  
  
```  
// Using_Dynamic_Accessors_b.cpp  
// compile with: /c /EHsc  
#include <stdio.h>  
#include <objbase.h>  
#include <atldbcli.h>  
  
int main( int argc, char* argv[] )  
{  
    HRESULT hr = CoInitialize( NULL );  
    if (hr != S_OK)  
    {  
        exit (-1);  
    }  
  
    CDataSource ds;  
    CSession ss;  
  
    CTable<CDynamicStringAccessor> rs;  
  
    // The following is an example initialization string:  
    hr = ds.OpenFromInitializationString(L"Provider=SQLOLEDB.1;"  
      L"Integrated Security=SSPI;Persist Security Info=False;"  
      L"Initial Catalog=Loginname;Data Source=your_data_source;"  
      L"Use Procedure for Prepare=1;Auto Translate=True;"  
      L"Packet Size=4096;Workstation ID=LOGINNAME01;"  
      L"Use Encryption for Data=False;"  
      L"Tag with column collation when possible=False");  
  
    hr = ss.Open( ds );  
    hr = rs.Open( ss, "Shippers" );  
  
    hr = rs.MoveFirst( );  
    while( SUCCEEDED( hr ) && hr != DB_S_ENDOFROWSET )  
    {  
        for( size_t i = 1; i <= rs.GetColumnCount( ); i++ )  
        {  
            printf_s( "column %d value is %s\n",   
                      i, rs.GetString( i ) );  
        }  
        hr = rs.MoveNext( );  
    }  
  
    rs.Close();     
    ss.Close();  
    ds.Close();  
    CoUninitialize();  
  
   return 0;  
  
}  
```  
  
## Utilizzo di CDynamicParameterAccessor  
 [CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md) è simile a [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md), tranne per il fatto che `CDynamicParameterAccessor` recupera le informazioni sui parametri da impostare chiamando l'interfaccia [ICommandWithParameters](https://msdn.microsoft.com/en-us/library/ms712937.aspx).  Il provider deve supportare `ICommandWithParameters` affinché il consumer possa utilizzare questa classe.  
  
 Le informazioni sui parametri sono memorizzate in un buffer che viene creato e gestito da questa classe.  Per ottenere i dati dei parametri dal buffer, utilizzare [CDynamicParameterAccessor::GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md) e [CDynamicParameterAccessor::GetParamType](../../data/oledb/cdynamicparameteraccessor-getparamtype.md).  
  
 Per un esempio dell'utilizzo di questa classe per eseguire una stored procedure di SQL Server e recuperare i valori dei parametri di output, vedere l'articolo della Knowledge Base Q058860 intitolato "HOWTO: Execute Stored Procedure using CDynamicParameterAccessor" \(informazioni in lingua inglese\). Gli articoli della Knowledge Base sono disponibili nella documentazione di Visual Studio in MSDN Library o a [http:\/\/support.microsoft.com](http://support.microsoft.com/).  
  
## Vedere anche  
 [Utilizzo delle funzioni di accesso](../../data/oledb/using-accessors.md)   
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)   
 [Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)   
 [Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)   
 [DynamicConsumer Sample](http://msdn.microsoft.com/it-it/2ccc4c61-6749-4e83-aa81-00f8009c0dc3)