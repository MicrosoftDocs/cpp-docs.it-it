---
title: db_command (attributo COM C++) | Microsoft Docs
ms.custom: ''
ms.date: 07/10/2018
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- vc-attr.db_command
dev_langs:
- C++
helpviewer_keywords:
- db_command attribute
ms.assetid: 714c3e15-85d7-408b-9a7c-88505c3e5d24
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0111dfc424a99d413a217149b3c5e579a3999f13
ms.sourcegitcommit: 955ef0f9d966e7c9c65e040f1e28fa83abe102a5
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/04/2018
ms.locfileid: "48791413"
---
# <a name="dbcommand"></a>db_command

Crea un comando OLE DB.

## <a name="syntax"></a>Sintassi

```cpp
[ db_command(command, name, source_name, hresult, bindings, bulk_fetch)  
]
```

### <a name="parameters"></a>Parametri

*command*<br/>
Una stringa di comando che contiene il testo di un comando OLE DB. Un semplice esempio è:

```cpp
[ db_command ( command = "Select * from Products" ) ]
```

La sintassi di *command* è la seguente:

> blocco del parametro di associazione 1 &nbsp; &nbsp;blocco del parametro di associazione comando OLE DB 2 &nbsp; &nbsp;continuazione del blocco del parametro di associazione comando OLE DB 3...

Un *blocco del parametro di associazione* è definito nel modo seguente:

> **(\[**  *bindtype* **]** *szVar1* \[, *szVar2* \[, *nVar3* \[,...]]] **)**

dove:

- **(** contrassegna l'inizio del blocco di associazione dati.

- **\[** *BindType* **]** è una delle stringhe tra maiuscole e minuscole seguenti:

  - **\[db_column]** associa ogni variabile membro a una colonna in un set di righe.

  - **\[BindTo]** (uguale a  **\[db_column]**).

  - **\[in]** associa le variabili membro come parametri di input.

  - **\[out]** associa le variabili membro come parametri di output.

  - **\[in, out]** associa le variabili membro come parametri di input/output.

- *szVarX*, *nVarX* si risolve in una variabile membro all'interno dell'ambito corrente.

- **)** contrassegna la fine del blocco di associazione dati.

Se la stringa di comando contiene uno o più identificatori, ad esempio \[nel], \[out], o \[in/out], **db_command** compila una mappa dei parametri.

Se la stringa di comando contiene uno o più parametri, ad esempio \[db_column] o \[bindto], **db_command** genera un set di righe e una mappa della funzione di accesso per gestire le variabili associate. Visualizzare [db_accessor](db-accessor.md) per altre informazioni.

> [!NOTE]
> \[*BindType*] la sintassi e il *associazioni* parametro non sono validi quando si usa **db_command** a livello di classe.

Di seguito sono riportati alcuni esempi di blocchi dei parametri di associazione. Nell'esempio seguente i membri dati `m_au_fname` e `m_au_lname` vengono associati rispettivamente alle colonne `au_fname` e `au_lname` della tabella authors nel database pubs:

```cpp
TCHAR m_au_fname[21];
TCHAR m_au_lname[41];
TCHAR m_state[3] = 'CA';

[db_command (command = "SELECT au_fname([bindto]m_au_fname), au_lname([bindto]m_au_lname) " \
   "FROM dbo.authors " \
   "WHERE state = ?([in]m_state)")  
]
```

*name*<br/>
(Facoltativo) Il nome dell'handle usato per lavorare con il set di righe. Se si specifica il parametro *name*, **db_command** genera una classe con il parametro *name*specificato, che può essere usato per attraversare il set di righe o per eseguire più query di comando. Se non si specifica il parametro *name*, non sarà possibile restituire più righe di risultati all'utente.

*source_name*<br/>
(Facoltativo) Il `CSession` variabile o istanza di una classe che ha il `db_source` attributo applicato ad esso in cui viene eseguito il comando. Visualizzare [db_source](db-source.md).

**db_command** verifica che la variabile usata per *source_name* sia valida, pertanto la variabile specificata deve essere in ambito funzione o in ambito globale.

*HRESULT*<br/>
(Facoltativo) Identifica la variabile che riceverà il valore HRESULT di questo comando di database. Se la variabile non esiste, verrà automaticamente inserita dall'attributo.

*associazioni*<br/>
(Facoltativo) Consente di separare i parametri di associazione dal comando OLE DB.

Se si specifica un valore per *associazioni*, **db_command** analizzerà il valore associato e non verrà analizzato il \[ *bindtype*] parametro. Questo utilizzo consente di usare la sintassi del provider OLE DB. Per disabilitare l'analisi senza l'associazione dei parametri, specificare `Bindings=""`.

Se non si specifica un valore per *associazioni*, **db_command** analizzerà il blocco del parametro di associazione, alla ricerca di '**(**', quindi su **\[** _bindtype_**]** tra parentesi quadre, seguite da uno o più variabili di membro C++ di dichiarato in precedenza, seguito da '**)**'. Tutto il testo tra parentesi verrà rimosso dal comando risultante e questi parametri verranno usati per creare associazioni di parametro e di colonna per questo comando.

*bulk_fetch*<br/>
(Facoltativo) Valore integer che specifica il numero di righe da recuperare.

Il valore predefinito è 1, che specifica il recupero di singola riga (il set di righe sarà di tipo [CRowset](../../data/oledb/crowset-class.md)).

Un valore maggiore di 1 che specifica il recupero di righe in blocco. Recupero di righe BULK si riferisce alla capacità dei set di righe bulk per recuperare più handle di riga (il set di righe sarà di tipo [CBulkRowset](../../data/oledb/cbulkrowset-class.md) e chiamerà `SetRows` con il numero di righe specificato).

Se *bulk_fetch* è minore di 1, `SetRows` restituirà zero.

## <a name="remarks"></a>Note

**db_command** crea un' [CCommand](../../data/oledb/ccommand-class.md) oggetto, che viene usato da un consumer OLE DB per eseguire un comando.

È possibile usare **db_command** con un ambito di classe o un ambito di funzione. La differenza principale è l'ambito dell'oggetto `CCommand` . Con l'ambito di funzione, i dati come le associazioni terminano alla fine della funzione. Gli utilizzi di ambito di funzione sia classe implicano la classe modello Consumer OLE DB `CCommand<>`, ma gli argomenti di modello diverso per i casi di funzione e di classe. In caso di funzione, verranno create associazioni a un' `Accessor` che include le variabili locali, mentre l'uso della classe dedurrà una `CAccessor`-come argomento di classe derivata. Quando viene usato come attributo della classe, **db_command** funziona insieme a **db_column**.

**db_command** può essere usato per eseguire comandi che non restituiscono un set di risultati.

Quando il provider di attributi del consumer applica questo attributo a una classe, il compilatore Rinomina la classe \_ *NomeClasse*della funzione di accesso, dove *NomeClasse* è il nome è stato assegnato il classe e il compilatore creerà inoltre una classe denominata *NomeClasse*, che deriva da \_ *NomeClasse*della funzione di accesso.  In Visualizzazione classi verranno visualizzate entrambe le classi.

## <a name="example"></a>Esempio

Questo esempio definisce un comando che consente di selezionare i nomi e i cognomi da una tabella in cui la colonna di stato corrisponde a "CA". **db_command** crea e legge un set di righe in cui è possibile chiamare funzioni generate dalla procedura guidata, ad esempio [OpenAll e CloseAll](../../data/oledb/consumer-wizard-generated-methods.md), nonché `CRowset` funzioni membro, ad esempio [MoveNext](../../data/oledb/crowset-movenext.md).

Si noti che per questo codice è necessario specificare la propria stringa di connessione al database pubs. Per informazioni su come eseguire questa operazione nell'ambiente di sviluppo, vedere [procedura: connettersi a un Database e visualizzazione degli oggetti esistenti](/sql/ssdt/how-to-connect-to-a-database-and-browse-existing-objects) e [aggiungere nuove connessioni](/visualstudio/data-tools/add-new-connections).

```cpp
// db_command.h
#include <atlbase.h>
#include <atlplus.h>
#include <atldbcli.h>

#pragma once

[  db_source(L"your connection string"), db_command(L" \
      SELECT au_lname, au_fname \
      FROM dbo.authors \
      WHERE state = 'CA'")  ]

struct CAuthors {
   // In order to fix several issues with some providers, the code below may bind
   // columns in a different order than reported by the provider

   DBSTATUS m_dwau_lnameStatus;
   DBSTATUS m_dwau_fnameStatus;
   DBLENGTH m_dwau_lnameLength;
   DBLENGTH m_dwau_fnameLength;

   [ db_column("au_lname", status="m_dwau_lnameStatus", length="m_dwau_lnameLength") ] TCHAR m_au_lname[41];
   [ db_column("au_fname", status="m_dwau_fnameStatus", length="m_dwau_fnameLength") ] TCHAR m_au_fname[21];

   [ db_param("7", paramtype="DBPARAMIO_INPUT") ] TCHAR m_state[3];

   void GetRowsetProperties(CDBPropSet* pPropSet) {
      pPropSet->AddProperty(DBPROP_CANFETCHBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
      pPropSet->AddProperty(DBPROP_CANSCROLLBACKWARDS, true, DBPROPOPTIONS_OPTIONAL);
   }
};
```

## <a name="example"></a>Esempio

```cpp
// db_command.cpp
// compile with: /c
#include "db_command.h"

int main(int argc, _TCHAR* argv[]) {
   HRESULT hr = CoInitialize(NULL);

   // Instantiate rowset
   CAuthors rs;

   // Open rowset and move to first row
   strcpy_s(rs.m_state, sizeof(rs.m_state), _T("CA"));
   hr = rs.OpenAll();
   hr = rs.MoveFirst();

   // Iterate through the rowset
   while( SUCCEEDED(hr) && hr != DB_S_ENDOFROWSET ) {
      // Print out the column information for each row
      printf("First Name: %s, Last Name: %s\n", rs.m_au_fname, rs.m_au_lname);
      hr = rs.MoveNext();
   }

   rs.CloseAll();
   CoUninitialize();
}
```

## <a name="example"></a>Esempio

Questo esempio usa `db_source` in una classe di origine dati `CMySource`e `db_command` nelle classi di comando `CCommand1` e `CCommand2`.

```cpp
// db_command_2.cpp
// compile with: /c
#include <atlbase.h>
#include <atlplus.h>
#include <atldbcli.h>
// class usage for both db_source and db_command

[  db_source(L"your connection string"), db_command(L" \
      SELECT au_lname, au_fname \
      FROM dbo.authors \
      WHERE state = 'CA'")  ]
struct CMySource {
   HRESULT OpenDataSource() {
      return S_OK;
   }
};

[db_command(command = "SELECT * FROM Products")]
class CCommand1 {};

[db_command(command = "SELECT FNAME, LNAME FROM Customers")]
class CCommand2 {};

int main() {
   CMySource s;
   HRESULT hr = s.OpenDataSource();
   if (SUCCEEDED(hr)) {
      CCommand1 c1;
      hr = c1.Open(s);

      CCommand2 c2;
      hr = c2.Open(s);
   }

   s.CloseDataSource();
}
```

## <a name="requirements"></a>Requisiti

### <a name="attribute-context"></a>Contesto attributo

|||
|-|-|
|**Si applica a**|**classe**, **struct**, membro, metodo, locale|
|**Ripetibile**|No|
|**Attributi obbligatori**|Nessuna|
|**Attributi non validi**|nessuno|

Per altre informazioni sui contesti di attributi, vedere [contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del consumer OLE DB](ole-db-consumer-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)  