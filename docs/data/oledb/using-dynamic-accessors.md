---
title: Usare funzioni di accesso dinamici | Microsoft Docs
ms.custom: ''
ms.date: 10/18/2018
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- accessors [C++], dynamic
- dynamic accessors
ms.assetid: e5d5bfa6-2b1d-49d0-8ced-914666422431
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: df80dfb235a03fdc45dfaa8a60c5fa5c1afb30bb
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50053305"
---
# <a name="using-dynamic-accessors"></a>Utilizzo delle funzioni di accesso dinamiche

Le funzioni di accesso dinamici è possibile accedere a un'origine dati quando non si dispone di alcuna conoscenza dello schema del database (struttura sottostante). La libreria di modelli OLE DB fornisce diverse classi che consentono di.

Il [DynamicConsumer](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/DynamicConsumer) esempio viene illustrato come usare le classi di funzione di accesso dinamica per ottenere informazioni sulla colonna e creare in modo dinamico le funzioni di accesso.

## <a name="using-cdynamicaccessor"></a>Utilizzo di CDynamicAccessor

[CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) consente di accedere a un'origine dati quando non si dispone di alcuna conoscenza dello schema del database (la struttura del database sottostante). `CDynamicAccessor` i metodi di recuperare informazioni quali i nomi delle colonne, numero e tipo di dati. Utilizzare queste informazioni di colonna per creare una funzione di accesso in modo dinamico in fase di esecuzione. Le informazioni di colonna vengono archiviate in un buffer che viene creato e gestito da questa classe. Ottenere dati dal buffer tramite il [GetValue](../../data/oledb/cdynamicaccessor-getvalue.md) (metodo).

## <a name="example"></a>Esempio

```cpp
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

[CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md) funziona come [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md), tranne che in un aspetto importante. Sebbene `CDynamicAccessor` richiede i dati in formato nativo indicato dal provider, `CDynamicStringAccessor` richiede che il provider recuperi tutti i dati dall'archivio dati come dati di tipo stringa. Il processo è particolarmente utile per eseguire semplici operazioni che non richiedono il calcolo di valori nell'archivio dati, ad esempio visualizzare o stampare il contenuto dell'archivio dati.

Usare `CDynamicStringAccessor` metodi per ottenere informazioni sulla colonna. Utilizzare queste informazioni di colonna per creare una funzione di accesso in modo dinamico in fase di esecuzione. Le informazioni di colonna vengono archiviate in un buffer creato e gestito da questa classe. Ottenere dati dal buffer, utilizzare [CDynamicStringAccessor:: GetString](../../data/oledb/cdynamicstringaccessor-getstring.md) o se archiviarlo per il buffer usando [:: GetString](../../data/oledb/cdynamicstringaccessor-setstring.md).

## <a name="example"></a>Esempio

```cpp
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

[CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md) è simile a [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md), ad eccezione del fatto che `CDynamicParameterAccessor` Ottiene le informazioni sui parametri da impostare chiamando il [ICommandWithParameters](/sql/relational-databases/native-client-ole-db-interfaces/icommandwithparameters) interfaccia. Il provider deve supportare `ICommandWithParameters` in modo che il consumer usi questa classe.

Le informazioni di parametro vengono archiviate in un buffer creato e gestito da questa classe. Ottenere i dati dei parametri dal buffer usando [CDynamicParameterAccessor:: GetParam](../../data/oledb/cdynamicparameteraccessor-getparam.md) e [CDynamicParameterAccessor:: GetParamType](../../data/oledb/cdynamicparameteraccessor-getparamtype.md).

Per un esempio che illustra come usare questa classe per eseguire una stored procedure SQL Server e ottenere i valori dei parametri output, vedere la [DynamicConsumer](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/DynamicConsumer) esempi di codice nelle [VCSamples Microsoft](https://github.com/Microsoft/VCSamples) repository in GitHub.

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)<br/>
[Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
[Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)<br/>
[Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
[Esempio DynamicConsumer](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/DynamicConsumer)
