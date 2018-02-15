---
title: Utilizzo di funzioni di accesso dinamiche | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- accessors [C++], dynamic
- dynamic accessors
ms.assetid: e5d5bfa6-2b1d-49d0-8ced-914666422431
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a585605b4b89d55e136aa349e697e0c19c93974f
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="using-dynamic-accessors"></a>Utilizzo delle funzioni di accesso dinamiche
Funzioni di accesso dinamiche consentono di accedere a un'origine dati quando si ha alcuna conoscenza dello schema del database (struttura sottostante). La libreria di modelli OLE DB fornisce diverse classi che consentono di eseguire questa operazione.  
  
 Il [DynamicConsumer](http://msdn.microsoft.com/en-us/2ccc4c61-6749-4e83-aa81-00f8009c0dc3) esempio viene illustrato come utilizzare le classi di funzione di accesso dinamica per ottenere informazioni sulla colonna e creare in modo dinamico le funzioni di accesso.  
  
## <a name="using-cdynamicaccessor"></a>Utilizzo di CDynamicAccessor  
 [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) consente di accedere a un'origine dati quando si ha alcuna conoscenza dello schema del database (la struttura del database sottostante). `CDynamicAccessor` metodi di ottengono informazioni di colonna, ad esempio i nomi delle colonne, numero e tipo di dati. Utilizzare queste informazioni di colonna per creare una funzione di accesso in modo dinamico in fase di esecuzione. Le informazioni di colonna vengono archiviate in un buffer che viene creato e gestito da questa classe. Ottenere dati dal buffer, utilizzare il [GetValue](../../data/oledb/cdynamicaccessor-getvalue.md) metodo.  
  
## <a name="example"></a>Esempio  
  
### <a name="code"></a>Codice  
  
```  
// Using_Dynamic_Accessors.cpp  
// compile with: /c /EHsc  
#include <stdio.h>  
#include <objbase.h>  
#include <atldbcli.h>  
  
int main(int argc, char* argv[] )  
{  
    HRESULT hr = CoInitialize(NULL );  
  
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
  
    hr = ss.Open(ds );  
    hr = rs.Open(ss, "Shippers" );  
  
    hr = rs.MoveFirst();  
    while(SUCCEEDED(hr ) && hr != DB_S_ENDOFROWSET )  
    {  
        for(size_t i = 1; i <= rs.GetColumnCount(); i++ )  
        {  
            DBTYPE type;  
            rs.GetColumnType(i, &type );  
            printf_s( "Column %d [%S] is of type %d\n",  
                      i, rs.GetColumnName(i ), type );   
  
            switch(type )  
            {  
                case DBTYPE_WSTR:  
                    printf_s( "value is %S\n",  
                              (WCHAR*)rs.GetValue(i ) );  
                break;  
                case DBTYPE_STR:  
                    printf_s( "value is %s\n",  
                              (CHAR*)rs.GetValue(i ) );  
                default:  
                    printf_s( "value is %d\n",  
                              *(long*)rs.GetValue(i ) );  
            }  
        }  
        hr = rs.MoveNext();  
    }  
  
    rs.Close();     
    ss.Close();  
    ds.Close();  
    CoUninitialize();  
  
    return 0;  
}  
```  
  
## <a name="using-cdynamicstringaccessor"></a>Utilizzo di CDynamicStringAccessor  
 [CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md) funziona come [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md), tranne che in un aspetto importante. Mentre `CDynamicAccessor` richiede i dati in formato nativo indicato dal provider, `CDynamicStringAccessor` richiede che il provider di recuperare tutti i dati dall'archivio dati come dati di tipo stringa. Ciò è particolarmente utile per eseguire semplici operazioni che non richiedono il calcolo di valori nell'archivio dati, ad esempio visualizzare o stampare il contenuto dell'archivio dati.  
  
 Utilizzare `CDynamicStringAccessor` metodi per ottenere informazioni di colonna. Utilizzare queste informazioni di colonna per creare una funzione di accesso in modo dinamico in fase di esecuzione. Le informazioni di colonna vengono archiviate in un buffer creato e gestito da questa classe. Ottenere dati dal buffer tramite [CDynamicStringAccessor:: GetString](../../data/oledb/cdynamicstringaccessor-getstring.md) o se archiviarlo per il buffer utilizzando [:: GetString](../../data/oledb/cdynamicstringaccessor-setstring.md).  
  
## <a name="example"></a>Esempio  
  
### <a name="code"></a>Codice  
  
```  
// Using_Dynamic_Accessors_b.cpp  
// compile with: /c /EHsc  
#include <stdio.h>  
#include <objbase.h>  
#include <atldbcli.h>  
  
int main(int argc, char* argv[] )  
{  
    HRESULT hr = CoInitialize(NULL );  
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
  
    hr = ss.Open(ds );  
    hr = rs.Open(ss, "Shippers" );  
  
    hr = rs.MoveFirst();  
    while(SUCCEEDED(hr ) && hr != DB_S_ENDOFROWSET )  
    {  
        for(size_t i = 1; i <= rs.GetColumnCount(); i++ )  
        {  
            printf_s( "column %d value is %s\n",   
                      i, rs.GetString(i ) );  
        }  
        hr = rs.MoveNext();  
    }  
  
    rs.Close();     
    ss.Close();  
    ds.Close();  
    CoUninitialize();  
  
   return 0;  
  
}  
```  
  
## <a name="using-cdynamicparameteraccessor"></a>Usando CDynamicParameterAccessor  
 [CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md) è simile a [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md), ad eccezione del fatto che `CDynamicParameterAccessor` Ottiene informazioni sui parametri da impostare chiamando il [ICommandWithParameters](https://msdn.microsoft.com/en-us/library/ms712937.aspx) interfaccia. Il provider deve supportare `ICommandWithParameters` in modo che il consumer usi questa classe.  
  
 Le informazioni di parametro vengono archiviate in un buffer creato e gestito da questa classe. Ottenere i dati dei parametri dal buffer tramite [CDynamicParameterAccessor:: GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md) e [CDynamicParameterAccessor:: GetParamType](../../data/oledb/cdynamicparameteraccessor-getparamtype.md).  
  
 Per un esempio sull'uso di questa classe per eseguire una stored procedure di SQL Server e recuperare i valori dei parametri di output, vedere l'articolo della Knowledge Base Q058860 "Procedura: Esecuzione della stored procedure usando CDynamicParameterAccessor". Articoli della Knowledge Base sono disponibili nella documentazione di Visual Studio di MSDN Library o al [http://support.microsoft.com](http://support.microsoft.com/).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzando funzioni di accesso](../../data/oledb/using-accessors.md)   
 [CDynamicAccessor (classe)](../../data/oledb/cdynamicaccessor-class.md)   
 [Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)   
 [CDynamicParameterAccessor (classe)](../../data/oledb/cdynamicparameteraccessor-class.md)   
 [Esempio DynamicConsumer](http://msdn.microsoft.com/en-us/2ccc4c61-6749-4e83-aa81-00f8009c0dc3)