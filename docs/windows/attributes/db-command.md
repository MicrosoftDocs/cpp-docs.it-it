---
title: db_command (attributo COM C++)
ms.date: 07/10/2018
f1_keywords:
- vc-attr.db_command
helpviewer_keywords:
- db_command attribute
ms.assetid: 714c3e15-85d7-408b-9a7c-88505c3e5d24
ms.openlocfilehash: 87043315def59bcd7cff706710d988cc0ed37876
ms.sourcegitcommit: 6b749db14b4cf3a2b8d581fda6fdd8cb98bc3207
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/05/2020
ms.locfileid: "82825432"
---
# <a name="db_command"></a>db_command

Crea un comando OLE DB.

## <a name="syntax"></a>Sintassi

```cpp
[ db_command(command, name, source_name, hresult, bindings, bulk_fetch)
]
```

### <a name="parameters"></a>Parametri

*.*<br/>
Una stringa di comando che contiene il testo di un comando OLE DB. Un semplice esempio è:

```cpp
[ db_command ( command = "Select * from Products" ) ]
```

La sintassi di *command* è la seguente:

> binding del blocco di parametri 1 \
> &nbsp;&nbsp;Comando OLE DB \
> binding parameter block 2 \
> &nbsp;&nbsp;continuazione del comando OLE DB \
> binding parameter block 3 \
> ...

Un *blocco del parametro di associazione* è definito nel modo seguente:

> **(\[ ** *BindType* **]** *szVar1* szVar1 \[, *szVar2* szVar2 \[, *nVar3* nVar3 \[,...]]] **)**

dove:

- **(** contrassegna l'inizio del blocco di associazione dati.

- **\[***BindType* **]** è una delle stringhe senza distinzione tra maiuscole e minuscole seguenti:

  - ** \[db_column]** associa ogni variabile membro a una colonna in un set di righe.

  - ** \[BindTo]** (uguale a ** \[db_column]**).

  - ** \[in]** associa le variabili membro come parametri di input.

  - ** \[out]** associa le variabili membro come parametri di output.

  - in, out] ** \[** associa le variabili membro come parametri di input/output.

- *szVarX*, *nVarX* si risolve in una variabile membro all'interno dell'ambito corrente.

- **)** contrassegna la fine del blocco di associazione dati.

Se la stringa di comando contiene uno o più identificatori, ad esempio \[in], \[out] o \[in/out], **db_command** compila una mappa dei parametri.

Se la stringa di comando contiene uno o più parametri, ad esempio \[db_column] o \[bindto], **db_command** genera un set di righe e una mappa della funzione di accesso per gestire le variabili associate. Per altre informazioni, vedere [db_accessor](db-accessor.md) .

> [!NOTE]
> La sintassi \[*bindtype*] e il parametro *bindings* non sono validi quando si usa **db_command** a livello di classe.

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
(Facoltativo) Nome dell'handle usato con il set di righe. Se si specifica il parametro *name*, **db_command** genera una classe con il parametro *name*specificato, che può essere usato per attraversare il set di righe o per eseguire più query di comando. Se non si specifica il parametro *name*, non sarà possibile restituire più righe di risultati all'utente.

*source_name*<br/>
(Facoltativo) La variabile `CSession` o l'istanza di una classe a cui è applicato l'attributo `db_source` con cui viene eseguito il comando. Vedere [db_source](db-source.md).

**db_command** verifica che la variabile usata per *source_name* sia valida, pertanto la variabile specificata deve essere in ambito funzione o in ambito globale.

*HRESULT*<br/>
(Facoltativo) Identifica la variabile che riceverà l'HRESULT di questo comando di database. Se la variabile non esiste, verrà automaticamente inserita dall'attributo.

*associazioni*<br/>
(Facoltativo) Consente di separare i parametri di associazione dal comando OLE DB.

Se si specifica un valore per *bindings*, **db_command** analizzerà il valore associato e non il parametro \[*bindtype*]. Questo utilizzo consente di usare la sintassi del provider OLE DB. Per disabilitare l'analisi, senza parametri di associazione, specificare `Bindings=""`.

Se non si specifica un valore per *bindings*, **db_command** analizzerà il blocco parametri di associazione per individuare "**(**", seguito da **\[**_bindtype_**]** tra parentesi quadre, seguito da una o più variabili membro C++ dichiarate in precedenza, a loro volta seguite da "**)**". Tutto il testo tra parentesi verrà rimosso dal comando risultante e questi parametri verranno usati per creare associazioni di parametro e di colonna per questo comando.

*bulk_fetch*<br/>
(Facoltativo) Valore intero che specifica il numero di righe da recuperare.

Il valore predefinito è 1, che specifica il recupero di una singola riga (il set di righe sarà di tipo [CRowset](../../data/oledb/crowset-class.md)).

Un valore maggiore di 1 che specifica il recupero di righe in blocco. Il recupero di righe in blocco si riferisce alla capacità dei set di righe in blocco di recuperare più handle di riga (il set di righe sarà di tipo [CBulkRowset](../../data/oledb/cbulkrowset-class.md) e chiamerà `SetRows` con il numero di righe specificato).

Se *bulk_fetch* è minore di 1, `SetRows` restituirà zero.

## <a name="remarks"></a>Osservazioni

**db_command** crea un oggetto [CCommand](../../data/oledb/ccommand-class.md) , che viene usato da un consumer OLE DB per eseguire un comando.

È possibile usare **db_command** con un ambito di classe o un ambito di funzione. La differenza principale è l'ambito dell'oggetto `CCommand` . Con l'ambito di funzione, i dati come le associazioni terminano alla fine della funzione. L'uso dell'ambito di classe e dell'ambito di funzione include la classe modello del consumer OLE DB `CCommand<>`, ma gli argomenti del modello nei casi di ambito di funzione e di classe sono diversi. In caso di ambito di funzione, verranno create associazioni a una `Accessor` che include le variabili locali, mentre l'uso della classe dedurrà una classe derivata da `CAccessor` come argomento. Quando viene usato come attributo della classe, **db_command** funziona insieme a **db_column**.

**db_command** può essere usato per eseguire comandi che non restituiscono un set di risultati.

Quando il provider di attributi del consumer applica questo attributo a una classe, il compilatore rinomina la classe in \_*NomeClasse*Accessor, dove *NomeClasse* è il nome assegnato alla classe. Il compilatore crea anche una classe denominata *NomeClasse*, che deriva da \_*NomeClasse*Accessor.  In Visualizzazione classi verranno visualizzate entrambe le classi.

## <a name="example"></a>Esempio

Questo esempio definisce un comando che consente di selezionare i nomi e i cognomi da una tabella in cui la colonna di stato corrisponde a "CA". **db_command** crea e legge un set di righe in cui è possibile chiamare funzioni generate dalla procedura guidata, ad esempio [OpenAll e CloseAll](../../data/oledb/consumer-wizard-generated-methods.md), nonché funzioni membro `CRowset` come [MoveNext](../../data/oledb/crowset-movenext.md).

Si noti che per questo codice è necessario specificare la propria stringa di connessione al database pubs. Per informazioni su come eseguire questa operazione nell'ambiente di sviluppo, vedere [Procedura: Connettersi a un database e visualizzare gli oggetti esistenti](/sql/ssdt/how-to-connect-to-a-database-and-browse-existing-objects) e [Aggiungere nuove connessioni](/visualstudio/data-tools/add-new-connections).

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
|**Attributi obbligatori**|Nessuno|
|**Attributi non validi**|Nessuno|

Per altre informazioni sui contesti di attributi, vedere [Contesti di attributi](cpp-attributes-com-net.md#contexts).

## <a name="see-also"></a>Vedere anche

[Attributi del consumer OLE DB](ole-db-consumer-attributes.md)<br/>
[Attributi autonomi](stand-alone-attributes.md)
