---
title: '#importare (direttiva) (C++)'
ms.date: 03/27/2019
f1_keywords:
- '#import'
helpviewer_keywords:
- .tlh files
- '#import directive'
- import directive (#import)
- tlh files
- tlbid switch
- preprocessor, directives
- COM, type library header file
ms.assetid: 787d1112-e543-40d7-ab15-a63d43f4030a
ms.openlocfilehash: 98a0f9f66fb209bb41215fc1e86a9682a4fed023
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59031985"
---
# <a name="import-directive-c"></a>Direttiva #import (C++)

**Sezione specifica C++**

Utilizzato per incorporare le informazioni di una libreria dei tipi. Il contenuto della libreria dei tipi viene convertito in classi C++ che descrivono principalmente le interfacce COM.

## <a name="syntax"></a>Sintassi

```
#import "filename" [attributes]
#import <filename> [attributes]
```

### <a name="parameters"></a>Parametri

*filename*<br/>
Specifica la libreria dei tipi da importare. *nome del file* può essere uno dei seguenti:

- Il nome di un file contenente una libreria dei tipi, ad esempio un file OLB, TLB o DLL. La parola chiave **file:**, può far precedere ogni nome di file.

- Il ProgID di un controllo nella libreria dei tipi. La parola chiave **progid:**, può essere preceduto dalla ciascun progid. Ad esempio:

    ```cpp
    #import "progid:my.prog.id.1.5"
    ```

   Per ulteriori informazioni sui ProgID, vedere [specificando l'ID di localizzazione e numero di versione](#_predir_the_23import_directive_specifyingthelocalizationidandversionnumber).

   Notare che quando si esegue la compilazione con un compilatore incrociato in un sistema operativo a 64 bit, il compilatore sarà in grado di leggere solo gli hive del Registro di sistema a 32 bit. È possibile utilizzare il compilatore a 64 bit nativo per compilare e registrare una libreria dei tipi a 64 bit.

- ID di libreria della libreria dei tipi. La parola chiave **libid:**, può far precedere ogni ID di libreria. Ad esempio:

    ```cpp
    #import "libid:12341234-1234-1234-1234-123412341234" version("4.0") lcid("9")
    ```

   Se non si specifica versione o lcid, le [regole](#_predir_the_23import_directive_specifyingthelocalizationidandversionnumber) applicati alla **progid:** vengono applicate anche agli **libid:**.

- Un file eseguibile (EXE).

- Un file di libreria (DLL) contenente una risorsa della libreria dei tipi (ad esempio ocx).

- Un documento composito contenente una libreria dei tipi.

- Qualsiasi formato di file che può essere riconosciuta dal **LoadTypeLib** API.

*Attributi*<br/>
Uno o più [#import attributi](#_predir_the_23import_directive_import_attributes). Separare gli attributi con uno spazio o una virgola. Ad esempio:

```cpp
#import "..\drawctl\drawctl.tlb" no_namespace, raw_interfaces_only
```

\-oppure-

```cpp
#import "..\drawctl\drawctl.tlb" no_namespace raw_interfaces_only
```

## <a name="remarks"></a>Note

## <a name="_predir_the_23import_directive_searchorderforfilename"></a> Ordine di ricerca per nome file

*nome del file* può essere preceduto da una specifica di directory. Il nome file deve essere il nome di un file esistente. La differenza tra le due forme di sintassi è costituita dall'ordine in cui il preprocessore cerca i file della libreria dei tipi quando il percorso è specificato in modo incompleto.

|Forma di sintassi|Operazione|
|-----------------|------------|
|Formato con virgolette|Indica al preprocessore di cercare i file di libreria digitare innanzitutto nella directory del file che contiene il **#import** istruzione e quindi nelle directory dei file che includono (`#include`) tale file. Il preprocessore effettua quindi la ricerca nei percorsi indicati di seguito.|
|Formato con parentesi angolari|Indica al preprocessore di cercare i file della libreria dei tipi nei percorsi seguenti:<br /><br /> 1.  Il `PATH` elenco di percorsi delle variabili di ambiente<br />2.  Il `LIB` elenco di percorsi delle variabili di ambiente<br />3.  Il percorso specificato dal parametro (altre directory di inclusione) opzione del compilatore, con la differenza che il compilatore cerca una libreria dei tipi a cui è stato fatto riferimento da un'altra libreria dei tipi con il [no_registry](../preprocessor/no-registry.md) attributo.|

##  <a name="_predir_the_23import_directive_specifyingthelocalizationidandversionnumber"></a> Specifica l'ID di localizzazione e del numero di versione

Quando si specifica un ProgID, è anche possibile specificare i relativi ID di localizzazione e numero di versione. Ad esempio:

```cpp
#import "progid:my.prog.id" lcid("0") version("4.0)
```

Se non si specifica un ID di localizzazione, viene scelto un ProgID in base alle regole seguenti:

- Se esiste un solo ID di localizzazione, viene utilizzato tale ID.

- Se esiste più di un ID di localizzazione, viene utilizzato il primo con il numero di versione 0, 9 o 409.

- Se esiste più di un ID di localizzazione e nessuno di essi è 0, 9 o 409, viene utilizzato l'ultimo.

- Se non si specifica un numero di versione, viene utilizzata la versione più recente.

##  <a name="_predir_the_23import_directive_header_files_created_by_import"></a> File di intestazione creati dall'importazione

**#import** crea due file di intestazione che ricostruiscono il contenuto della raccolta di tipo nel codice sorgente C++. Il file di intestazione principale è simile a quello prodotto dal compilatore MIDL (Microsoft Interface Definition Language), ma con ulteriori dati e codice generato dal compilatore. Il [file di intestazione principale](#_predir_the_primary_type_library_header_file) ha lo stesso nome di base della libreria dei tipi, oltre a una. Estensione TLH. Il file di intestazione secondario è costituito dallo stesso nome di base della libreria dei tipi seguito dall'estensione TLI. Contiene le implementazioni per le funzioni membro generate dal compilatore ed è incluso (`#include`) nel file di intestazione principale.

Se si importa una proprietà dispinterface che utilizza i parametri byref, #import non genererà declspec ([proprietà](../cpp/property-cpp.md)) istruzione per la funzione.

Entrambi i file di intestazione vengono inseriti nella directory di output specificata dall'opzione /Fo (Specifica un file oggetto). Vengono quindi letti e compilati dal compilatore come se il file di intestazione principale venisse denominato da una direttiva `#include`.

Le seguenti ottimizzazioni del compilatore forniti con il **#import** direttiva:

- Al momento della creazione, al file di intestazione viene assegnato lo stesso timestamp della libreria dei tipi.

- Quando **#import** viene elaborato, il compilatore controlla innanzitutto se l'intestazione esiste ed è aggiornata. In caso affermativo, non è necessario ricrearla.

Il **#import** direttiva anche partecipa alla ricompilazione minima e può essere inserita in un file di intestazione precompilata. Visualizzare [creazione di file di intestazione precompilato](../build/creating-precompiled-header-files.md) per altre informazioni.

###  <a name="_predir_the_primary_type_library_header_file"></a> File di intestazione della libreria di tipi primaria
Il file di intestazione principale della libreria dei tipi è costituito da sette sezioni:

- Boilerplate di intestazione: È costituito da commenti, `#include` informativa per COMDEF. H (che definisce alcune macro standard utilizzate nell'intestazione) e altre informazioni varie sull'installazione.

- I riferimenti in avanti e typedef: Include ad esempio le dichiarazioni di struttura `struct IMyInterface` e typedef.

- Dichiarazioni del puntatore intelligente: La classe modello `_com_ptr_t` è un'implementazione di puntatore intelligente che incapsula i puntatori di interfaccia ed elimina la necessità di chiamare `AddRef`, `Release`, `QueryInterface` funzioni. Nasconde inoltre la chiamata a `CoCreateInstance` durante la creazione di un nuovo oggetto COM. In questa sezione viene utilizzata istruzione macro `_COM_SMARTPTR_TYPEDEF` per definire i typedef delle interfacce COM come specializzazioni di modello il [com_ptr_t](../cpp/com-ptr-t-class.md) classe modello. Ad esempio, per l'interfaccia `IMyInterface`, il. File TLH conterrà:

    ```TLH
    _COM_SMARTPTR_TYPEDEF(IMyInterface, __uuidof(IMyInterface));
    ```

   in cui si espanderà il compilatore:

    ```cpp
    typedef _com_ptr_t<_com_IIID<IMyInterface, __uuidof(IMyInterface)> > IMyInterfacePtr;
    ```

   Il tipo `IMyInterfacePtr` può essere quindi utilizzato al posto del puntatore a interfaccia raw `IMyInterface*`. Di conseguenza, non è necessario chiamare le varie `IUnknown` funzioni membro

- Dichiarazioni TypeInfo: È costituito principalmente da definizioni di classi e altri elementi che espongono i singoli elementi typeinfo restituiti da `ITypeLib:GetTypeInfo`. In questa sezione, ogni elemento typeinfo della libreria dei tipi si riflette nell'intestazione in un formato che dipende dalle informazioni `TYPEKIND`.

- Definizione di GUID obsoleta facoltativa: Contiene le inizializzazioni delle costanti GUID denominate. Si tratta di nomi nel formato `CLSID_CoClass` e `IID_Interface`, simili a quelli generati dal compilatore MIDL.

- Istruzione `#include` per l'intestazione secondaria della libreria dei tipi.

- Boilerplate del piè di pagina: Include attualmente `#pragma pack(pop)`.

Tutte le sezioni, tranne la sezione di boilerplate boilerplate e nel piè di pagina intestazione, sono racchiusi in uno spazio dei nomi con il nome specificato per il `library` istruzione nel file IDL originale. È possibile utilizzare i nomi dell'intestazione della libreria dei tipi mediante una qualificazione esplicita con il nome dello spazio dei nomi oppure includendo la seguente istruzione:

```cpp
using namespace MyLib;
```

immediatamente dopo il **#import** istruzione nel codice sorgente.

Lo spazio dei nomi può essere soppresso mediante il [no_namespace](no-namespace.md)) attributo delle **#import** direttiva. Tuttavia, l'eliminazione dello spazio dei nomi può causare conflitti di nomi. Lo spazio dei nomi può essere rinominato anche per il [rename_namespace](rename-namespace.md) attributo.

Il compilatore fornisce il percorso completo di qualsiasi dipendenza della libreria dei tipi richiesta dalla libreria dei tipi attualmente elaborata. Il percorso viene scritto, sotto forma di commenti, nell'intestazione della libreria dei tipi (TLH) generata dal compilatore per ogni libreria dei tipi elaborata.

Se una libreria dei tipi include riferimenti ai tipi definiti in altre librerie dei tipi, il file con estensione THL includerà commenti del seguente tipo:

```TLH
//
// Cross-referenced type libraries:
//
//  #import "c:\path\typelib0.tlb"
//
```

Il nome effettivo del file nei **#import** commento è il percorso completo della libreria dei tipi di riferimenti incrociati, archiviato nel Registro di sistema. Se si verificano errori a causa di definizioni di tipi mancanti, controllare i commenti all'inizio del file con estensione THL per vedere quali librerie dei tipi dipendenti è necessario importare per prime. Gli errori possibili sono quelli di sintassi (ad esempio C2143, C2146, C2321), C2501 (specificatori decimali mancanti), oppure C2433 ("inline" non consentito nella dichiarazione di dati) durante la compilazione del file con estensione TLI.

È necessario determinare quale della dipendenza commenti non altrimenti disponibili dalle intestazioni di sistema e quindi forniscono un' **#import** direttiva a un certo punto prima le **#import** direttiva del dipendente libreria dei tipi per risolvere gli errori.

## <a name="_predir_the_23import_directive_import_attributes"></a> attributi #import

**#import** può includere facoltativamente uno o più attributi. Questi attributi indicano al compilatore di modificare il contenuto delle intestazioni della libreria dei tipi. Una barra rovesciata (**\\**) simbolo può essere utilizzato per includere altre righe in una singola **#import** istruzione. Ad esempio:

```cpp
#import "test.lib" no_namespace \
   rename("OldName", "NewName")
```

Per altre informazioni, vedere [#import attributi](../preprocessor/hash-import-attributes-cpp.md).

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)<br/>
[Supporto COM del compilatore](../cpp/compiler-com-support.md)