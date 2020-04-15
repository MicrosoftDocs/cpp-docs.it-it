---
title: '#Direttiva import (C++)'
ms.date: 08/29/2019
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
ms.openlocfilehash: 9cdfef091b659151f427c381e386f0e83396e741
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81332059"
---
# <a name="import-directive-c"></a>#import direttiva (C )

**Sezione specifica C++**

Utilizzato per incorporare le informazioni di una libreria dei tipi. Il contenuto della libreria dei tipi viene convertito in classi C++ che descrivono principalmente le interfacce COM.

## <a name="syntax"></a>Sintassi

> **#import** "*nomefile*" \[ *attributi*]
> **#import** \<*attributi* *del nome file*> \[]

### <a name="parameters"></a>Parametri

*Filename*\
Specifica la libreria dei tipi da importare. Il *nome del file* può essere uno dei seguenti tipi:

- Il nome di un file contenente una libreria dei tipi, ad esempio un file OLB, TLB o DLL. La parola `file:`chiave , , può precedere ogni nome di file.

- Il ProgID di un controllo nella libreria dei tipi. La parola `progid:`chiave , , può precedere ogni progid. Ad esempio:

    ```cpp
    #import "progid:my.prog.id.1.5"
    ```

   Per ulteriori informazioni sui progid, vedere [Specifica dell'ID di localizzazione e](#_predir_the_23import_directive_specifyingthelocalizationidandversionnumber)del numero di versione .

   Quando si utilizza un compilatore incrociato a 32 bit in un sistema operativo a 64 bit, il compilatore può leggere solo l'hive del Registro di sistema a 32 bit. È possibile utilizzare il compilatore a 64 bit nativo per compilare e registrare una libreria dei tipi a 64 bit.

- ID di libreria della libreria dei tipi. La parola `libid:`chiave , , può precedere ogni ID di libreria. Ad esempio:

    ```cpp
    #import "libid:12341234-1234-1234-1234-123412341234" version("4.0") lcid("9")
    ```

   Se non si `version` specifica `lcid`o , `progid:` le [regole](#_predir_the_23import_directive_specifyingthelocalizationidandversionnumber) `libid:`applicate vengono applicate anche a .

- Un file eseguibile (EXE).

- Un file di libreria (con estensione dll) contenente una risorsa della libreria dei tipi ( ad esempio un ocx).

- Un documento composito contenente una libreria dei tipi.

- Qualsiasi altro formato di file che può essere compreso dall'API **LoadTypeLib.**

*Attributi*\
Uno o più [attributi #import](#_predir_the_23import_directive_import_attributes). Separare gli attributi con uno spazio o una virgola. Ad esempio:

```cpp
#import "..\drawctl\drawctl.tlb" no_namespace, raw_interfaces_only
```

\-oppure-

```cpp
#import "..\drawctl\drawctl.tlb" no_namespace raw_interfaces_only
```

## <a name="remarks"></a>Osservazioni

### <a name="search-order-for-filename"></a><a name="_predir_the_23import_directive_searchorderforfilename"></a>Ordine di ricerca per il nome del file

*nomefile* è facoltativamente preceduto da una specifica di directory. Il nome file deve essere il nome di un file esistente. La differenza tra le due forme di sintassi è costituita dall'ordine in cui il preprocessore cerca i file della libreria dei tipi quando il percorso è specificato in modo incompleto.

|Forma di sintassi|Azione|
|-----------------|------------|
|Formato con virgolette|Indica al preprocessore di cercare i file della libreria dei tipi prima nella directory del file che`#include`contiene l'istruzione **#import,** quindi nelle directory di tutti i file che includono tale file. Il preprocessore effettua quindi la ricerca nei percorsi indicati di seguito.|
|Formato con parentesi angolari|Indica al preprocessore di cercare i file della libreria dei tipi nei percorsi seguenti:<br /><br /> 1. `PATH` L'elenco dei percorsi delle variabili di ambiente<br />2. `LIB` L'elenco dei percorsi delle variabili di ambiente<br />3. Il percorso specificato dall'opzione del compilatore [/I,](../build/reference/i-additional-include-directories.md) ad eccezione del fatto che il compilatore sta cercando una libreria dei tipi a cui è stato fatto riferimento da un'altra libreria dei tipi con l'attributo [no_registry.](../preprocessor/no-registry.md)|

### <a name="specify-the-localization-id-and-version-number"></a><a name="_predir_the_23import_directive_specifyingthelocalizationidandversionnumber"></a>Specificare l'ID di localizzazione e il numero di versione

Quando si specifica un ProgID, è anche possibile specificare i relativi ID di localizzazione e numero di versione. Ad esempio:

```cpp
#import "progid:my.prog.id" lcid("0") version("4.0)
```

Se non si specifica un ID di localizzazione, viene scelto un progid in base alle seguenti regole:

- Se è presente un solo ID di localizzazione, viene utilizzato tale ID.

- Se è presente più di un ID di localizzazione, viene utilizzato il primo con numero di versione 0, 9 o 409.If there's more than one localization ID, the first one with version number 0, 9, or 409 is used.

- Se è presente più di un ID di localizzazione e nessuno di essi è 0, 9 o 409, viene utilizzato l'ultimo.

- Se non si specifica un numero di versione, viene utilizzata la versione più recente.

### <a name="header-files-created-by-import"></a><a name="_predir_the_23import_directive_header_files_created_by_import"></a>File di intestazione creati dall'importazione

**#import** crea due file di intestazione che ricostruiscono il contenuto della libreria dei tipi nel codice sorgente c'è. Il file di intestazione principale è simile a quello prodotto dal compilatore MIDL (Microsoft Interface Definition Language), ma con codice e dati aggiuntivi generati dal compilatore. Il file di [intestazione primario](#_predir_the_primary_type_library_header_file) ha lo stesso nome di base della libreria dei tipi, più un file . estensione TLH. Il file di intestazione secondario è costituito dallo stesso nome di base della libreria dei tipi seguito dall'estensione TLI. Contiene le implementazioni per le funzioni membro generate dal compilatore ed è incluso (`#include`) nel file di intestazione principale.

Se si importa una proprietà `byref` dell'interfaccia dispatch che utilizza parametri, **#import** non genera un'istruzione [__declspec(proprietà)](../cpp/property-cpp.md) per la funzione.

Entrambi i file di intestazione vengono inseriti nella directory di output specificata dall'opzione [/Fo (nome file oggetto).](../build/reference/fo-object-file-name.md) Vengono quindi letti e compilati dal compilatore come se `#include` il file di intestazione primario fosse denominato da una direttiva.

Le seguenti ottimizzazioni del compilatore sono dotate della **direttiva #import:**

- Al momento della creazione, al file di intestazione viene assegnato lo stesso timestamp della libreria dei tipi.

- Quando **#import** viene elaborata, il compilatore controlla innanzitutto se l'intestazione esiste ed è aggiornata. In caso affermativo, non è necessario ricrearlo.

La direttiva **#import** partecipa anche alla ricompilazione minima e può essere inserita in un file di intestazione precompilato.  Per ulteriori informazioni, vedere Creazione di file di [intestazione precompilati](../build/creating-precompiled-header-files.md).

### <a name="primary-type-library-header-file"></a><a name="_predir_the_primary_type_library_header_file"></a>File di intestazione della libreria dei tipi principale

Il file di intestazione principale della libreria dei tipi è costituito da sette sezioni:

- Boilerplate di intestazione: include i commenti, l'istruzione `#include` per COMDEF.H (che definisce alcune macro standard utilizzate nell'intestazione) e altre informazioni varie sull'installazione.

- Riferimenti in avanti e typedef: includono le dichiarazioni di struttura come `struct IMyInterface` e typedef.

- Dichiarazioni di puntatori `_com_ptr_t` intelligenti: la classe modello è un puntatore intelligente. Incapsula i puntatori a interfaccia ed `AddRef`elimina `Release`la `QueryInterface` necessità di chiamare , , e funzioni . Nasconde inoltre la `CoCreateInstance` chiamata durante la creazione di un nuovo oggetto COM. In questa sezione `_COM_SMARTPTR_TYPEDEF` viene utilizzata l'istruzione macro per stabilire typedef di interfacce COM come specializzazioni di modello della classe modello [_com_ptr_t.](../cpp/com-ptr-t-class.md) Ad esempio, `IMyInterface`per interface , il file . Il file TLH conterrà:

    ```TLH
    _COM_SMARTPTR_TYPEDEF(IMyInterface, __uuidof(IMyInterface));
    ```

   in cui si espanderà il compilatore:

    ```cpp
    typedef _com_ptr_t<_com_IIID<IMyInterface, __uuidof(IMyInterface)> > IMyInterfacePtr;
    ```

   Il tipo `IMyInterfacePtr` può essere quindi utilizzato al posto del puntatore a interfaccia raw `IMyInterface*`. Di conseguenza, non è necessario `IUnknown` chiamare le varie funzioni membro

- Dichiarazioni typeinfo: è costituita principalmente da definizioni di classe e `ITypeLib:GetTypeInfo`altri elementi che espongono i singoli elementi typeinfo restituiti da . In questa sezione, ogni elemento typeinfo della libreria dei tipi si riflette nell'intestazione in un formato che dipende dalle informazioni `TYPEKIND`.

- Definizione di GUID obsoleta facoltativa: contiene le inizializzazioni delle costanti GUID denominate. Questi nomi hanno `CLSID_CoClass` `IID_Interface`il formato e , in modo simile a quelli generati dal compilatore MIDL.

- Istruzione `#include` per l'intestazione secondaria della libreria dei tipi.

- Boilerplate del piè di pagina: attualmente include `#pragma pack(pop)`.

Tutte le sezioni, ad eccezione della sezione boilerplate di intestazione boilerplate `library` e footer boilerplate, sono racchiuse in uno spazio dei nomi con il nome specificato dall'istruzione nel file IDL originale. È possibile utilizzare i nomi dall'intestazione della libreria dei tipi da una qualifica esplicita utilizzando il nome dello spazio dei nomi. In alternativa, è possibile includere la seguente istruzione:

```cpp
using namespace MyLib;
```

immediatamente dopo l'istruzione **#import** nel codice sorgente.

Lo spazio dei nomi può essere eliminato utilizzando l'attributo [no_namespace](no-namespace.md)) della direttiva **#import.** Tuttavia, l'eliminazione dello spazio dei nomi può causare conflitti di nomi. Lo spazio dei nomi può anche essere rinominato dall'attributo [rename_namespace.](rename-namespace.md)

Il compilatore fornisce il percorso completo di qualsiasi dipendenza della libreria dei tipi richiesta dalla libreria dei tipi attualmente in fase di elaborazione. Il percorso viene scritto, sotto forma di commenti, nell'intestazione della libreria dei tipi (TLH) generata dal compilatore per ogni libreria dei tipi elaborata.

Se una libreria dei tipi include riferimenti ai tipi definiti in altre librerie dei tipi, il file con estensione THL includerà commenti del seguente tipo:

```TLH
//
// Cross-referenced type libraries:
//
//  #import "c:\path\typelib0.tlb"
//
```

Il nome file effettivo nel **commento #import** è il percorso completo della libreria dei tipi con riferimenti incrociati, come memorizzato nel Registro di sistema. Se si verificano errori causati da definizioni di tipo mancanti, controllare i commenti all'esterno del file . TLH per vedere quali librerie dei tipi dipendenti potrebbero dover essere importate per prime. Gli errori possibili sono quelli di sintassi (ad esempio C2143, C2146, C2321), C2501 (specificatori decimali mancanti), oppure C2433 ("inline" non consentito nella dichiarazione di dati) durante la compilazione del file con estensione TLI.

Per risolvere gli errori di dipendenza, determinare quali dei commenti di dipendenza non sono altrimenti forniti dalle intestazioni di sistema e quindi fornire una direttiva **#import** a un certo punto prima della **direttiva #import** della libreria dei tipi dipendente.

### <a name="import-attributes"></a><a name="_predir_the_23import_directive_import_attributes"></a>attributi #import

**#import** possibile includere facoltativamente uno o più attributi. Questi attributi indicano al compilatore di modificare il contenuto delle intestazioni della libreria dei tipi. Un simbolo**\\**barra rovesciata ( ) può essere utilizzato per includere righe aggiuntive in una singola istruzione **#import.** Ad esempio:

```cpp
#import "test.lib" no_namespace \
   rename("OldName", "NewName")
```

Per ulteriori informazioni, vedere [attributi #import](../preprocessor/hash-import-attributes-cpp.md).

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedere anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)\
[Supporto COM del compilatore](../cpp/compiler-com-support.md)
