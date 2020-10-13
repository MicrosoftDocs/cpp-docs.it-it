---
title: Utilizzo delle funzioni di accesso dinamiche
ms.date: 10/18/2018
helpviewer_keywords:
- accessors [C++], dynamic
- dynamic accessors
ms.assetid: e5d5bfa6-2b1d-49d0-8ced-914666422431
ms.openlocfilehash: 4f42d6f20da819cf325cad06a04878b46e52352a
ms.sourcegitcommit: 43cee7a0d41a062661229043c2f7cbc6ace17fa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/13/2020
ms.locfileid: "92008677"
---
# <a name="using-dynamic-accessors"></a>Utilizzo delle funzioni di accesso dinamiche

Le funzioni di accesso dinamiche consentono di accedere a un'origine dati quando non si conosce lo schema del database (struttura sottostante). La libreria di modelli di OLE DB offre diverse classi utili.

Nell'esempio [DynamicConsumer](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/DynamicConsumer) viene illustrato come utilizzare le classi di funzioni di accesso dinamiche per ottenere informazioni sulle colonne e creare funzioni di accesso dinamiche.

## <a name="using-cdynamicaccessor"></a>Uso di CDynamicAccessor

[CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) consente di accedere a un'origine dati quando non si conosce lo schema del database, ovvero la struttura sottostante del database. `CDynamicAccessor` i metodi ottengono informazioni sulla colonna, ad esempio i nomi delle colonne, il conteggio e il tipo di dati. Queste informazioni sulla colonna vengono usate per creare una funzione di accesso dinamicamente in fase di esecuzione. Le informazioni sulla colonna vengono archiviate in un buffer creato e gestito da questa classe. Recuperare i dati dal buffer usando il metodo [GetValue](./cdynamicaccessor-class.md#getvalue) .

## <a name="example-cdynamic-accessors"></a>Esempio: funzioni di accesso CDynamic

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

## <a name="using-cdynamicstringaccessor"></a>Uso di CDynamicStringAccessor

[CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md) funziona come [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md), tranne che in un modo importante. Mentre `CDynamicAccessor` richiede i dati nel formato nativo segnalato dal provider, `CDynamicStringAccessor` richiede che il provider recuperi tutti i dati a cui si accede dall'archivio dati come dati di stringa. Il processo è particolarmente utile per le attività semplici che non richiedono il calcolo dei valori nell'archivio dati, ad esempio la visualizzazione o la stampa del contenuto dell'archivio dati.

Usare i `CDynamicStringAccessor` metodi per ottenere informazioni sulla colonna. Queste informazioni sulla colonna vengono usate per creare una funzione di accesso dinamicamente in fase di esecuzione. Le informazioni sulla colonna vengono archiviate in un buffer creato e gestito da questa classe. Recuperare i dati dal buffer usando [CDynamicStringAccessor:: GetString](./cdynamicstringaccessor-class.md#getstring) o archiviarli nel buffer tramite [CDynamicStringAccessor:: sestring](./cdynamicstringaccessor-class.md#setstring).

## <a name="example-cdynamicstringaccessor"></a>Esempio: CDynamicStringAccessor

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

## <a name="using-cdynamicparameteraccessor"></a>Uso di CDynamicParameterAccessor

[CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md) è simile a [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md), ad eccezione `CDynamicParameterAccessor` del fatto che ottiene le informazioni sui parametri da impostare chiamando l'interfaccia [ICommandWithParameters](/sql/relational-databases/native-client-ole-db-interfaces/icommandwithparameters) . Il provider deve supportare `ICommandWithParameters` in modo che il consumer usi questa classe.

Le informazioni di parametro vengono archiviate in un buffer creato e gestito da questa classe. Ottenere i dati dei parametri dal buffer usando [CDynamicParameterAccessor:: GetParam](./cdynamicparameteraccessor-class.md#getparam) e [CDynamicParameterAccessor:: GetParamType](./cdynamicparameteraccessor-class.md#getparamtype).

Per un esempio che illustra come usare questa classe per eseguire un SQL Server stored procedure e ottenere i valori dei parametri di output, vedere il codice di esempio [DynamicConsumer](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/DynamicConsumer) nel repository [Microsoft VCSamples](https://github.com/Microsoft/VCSamples) su GitHub.

## <a name="see-also"></a>Vedere anche

[Uso delle funzioni di accesso](../../data/oledb/using-accessors.md)<br/>
[Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
[Classe CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)<br/>
[Classe CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
[Esempio DynamicConsumer](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/DynamicConsumer)
