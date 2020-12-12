---
description: 'Altre informazioni su: direttiva #import (C++)'
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
ms.openlocfilehash: 73768071dd0ee300ad7b2fd2706fda0ed76067ac
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97269276"
---
# <a name="import-directive-c"></a>direttiva #import (C++)

**Sezione specifica C++**

Utilizzato per incorporare le informazioni di una libreria dei tipi. Il contenuto della libreria dei tipi viene convertito in classi C++ che descrivono principalmente le interfacce COM.

## <a name="syntax"></a>Sintassi

> **#import** attributi "*filename*" \[ ] \
> **#import** \<*filename*> \[ *attributi*]

### <a name="parameters"></a>Parametri

*filename*\
Specifica la libreria dei tipi da importare. Il *nome file* può essere uno dei tipi seguenti:

- Il nome di un file contenente una libreria dei tipi, ad esempio un file OLB, TLB o DLL. La parola chiave, `file:` , può precedere ogni nome file.

- Il ProgID di un controllo nella libreria dei tipi. La parola chiave, `progid:` , può precedere ogni ProgID. Ad esempio:

    ```cpp
    #import "progid:my.prog.id.1.5"
    ```

   Per ulteriori informazioni sui ProgID, vedere [specifica dell'ID di localizzazione e del numero di versione](#_predir_the_23import_directive_specifyingthelocalizationidandversionnumber).

   Quando si usa un compilatore incrociato a 32 bit in un sistema operativo a 64 bit, il compilatore può solo leggere l'hive del registro di sistema a 32 bit. È possibile utilizzare il compilatore a 64 bit nativo per compilare e registrare una libreria dei tipi a 64 bit.

- ID di libreria della libreria dei tipi. La parola chiave, `libid:` , può precedere ogni ID della libreria. Ad esempio:

    ```cpp
    #import "libid:12341234-1234-1234-1234-123412341234" version("4.0") lcid("9")
    ```

   Se non si specifica `version` o `lcid` , le [regole](#_predir_the_23import_directive_specifyingthelocalizationidandversionnumber) applicate a `progid:` vengono applicate anche a `libid:` .

- Un file eseguibile (EXE).

- Un file di libreria (con estensione dll) contenente una risorsa della libreria di tipi, ad esempio. ocx.

- Un documento composito contenente una libreria dei tipi.

- Qualsiasi altro formato di file che può essere compreso dall'API **LoadTypeLib** .

*attributi*\
Uno o più [attributi #import](#_predir_the_23import_directive_import_attributes). Separare gli attributi con uno spazio o una virgola. Ad esempio:

```cpp
#import "..\drawctl\drawctl.tlb" no_namespace, raw_interfaces_only
```

\-oppure-

```cpp
#import "..\drawctl\drawctl.tlb" no_namespace raw_interfaces_only
```

## <a name="remarks"></a>Commenti

### <a name="search-order-for-filename"></a><a name="_predir_the_23import_directive_searchorderforfilename"></a> Ordine di ricerca per il nome file

*filename* è facoltativamente preceduto da una specifica di directory. Il nome file deve essere il nome di un file esistente. La differenza tra le due forme di sintassi è costituita dall'ordine in cui il preprocessore cerca i file della libreria dei tipi quando il percorso è specificato in modo incompleto.

|Forma di sintassi|Azione|
|-----------------|------------|
|Formato con virgolette|Indica al preprocessore di cercare i file della libreria dei tipi innanzitutto nella directory del file che contiene l'istruzione **#import** , quindi nelle directory di qualsiasi file includa ( `#include` ) tale file. Il preprocessore effettua quindi la ricerca nei percorsi indicati di seguito.|
|Formato con parentesi angolari|Indica al preprocessore di cercare i file della libreria dei tipi nei percorsi seguenti:<br /><br /> 1. `PATH` elenco dei percorsi delle variabili di ambiente<br />2. `LIB` elenco dei percorsi delle variabili di ambiente<br />3. percorso specificato dall'opzione del compilatore [/i](../build/reference/i-additional-include-directories.md) , tranne per il fatto che il compilatore sta cercando una libreria dei tipi a cui è stato fatto riferimento da un'altra libreria dei tipi con l'attributo [no_registry](../preprocessor/no-registry.md) .|

### <a name="specify-the-localization-id-and-version-number"></a><a name="_predir_the_23import_directive_specifyingthelocalizationidandversionnumber"></a> Specificare l'ID di localizzazione e il numero di versione

Quando si specifica un ProgID, è anche possibile specificare i relativi ID di localizzazione e numero di versione. Ad esempio:

```cpp
#import "progid:my.prog.id" lcid("0") version("4.0)
```

Se non si specifica un ID di localizzazione, viene scelto un ProgID in base alle regole seguenti:

- Se è presente un solo ID di localizzazione, viene utilizzato.

- Se è presente più di un ID di localizzazione, viene utilizzato il primo con il numero di versione 0, 9 o 409.

- Se è presente più di un ID di localizzazione e nessuno di essi è 0, 9 o 409, viene usato l'ultimo.

- Se non si specifica un numero di versione, viene utilizzata la versione più recente.

### <a name="header-files-created-by-import"></a><a name="_predir_the_23import_directive_header_files_created_by_import"></a> File di intestazione creati dall'importazione

**#import** crea due file di intestazione che ricostruiscono il contenuto della libreria dei tipi nel codice sorgente C++. Il file di intestazione principale è simile a quello prodotto dal compilatore Microsoft Interface Definition Language (MIDL), ma con altri dati e codice generato dal compilatore. Il [file di intestazione primario](#_predir_the_primary_type_library_header_file) ha lo stesso nome di base della libreria dei tipi, oltre a un. Estensione TLH. Il file di intestazione secondario è costituito dallo stesso nome di base della libreria dei tipi seguito dall'estensione TLI. Contiene le implementazioni per le funzioni membro generate dal compilatore ed è incluso (`#include`) nel file di intestazione principale.

Se si importa una proprietà dispatch che usa `byref` parametri, **#import** non genera un'istruzione [__declspec (Property)](../cpp/property-cpp.md) per la funzione.

Entrambi i file di intestazione vengono inseriti nella directory di output specificata dall'opzione [/FO (nome file oggetto)](../build/reference/fo-object-file-name.md) . Vengono quindi letti e compilati dal compilatore come se il file di intestazione principale fosse stato denominato da una `#include` direttiva.

Le seguenti ottimizzazioni del compilatore sono disponibili con la direttiva **#import** :

- Al momento della creazione, al file di intestazione viene assegnato lo stesso timestamp della libreria dei tipi.

- Quando **#import** viene elaborato, il compilatore controlla innanzitutto se l'intestazione esiste ed è aggiornata. In caso affermativo, non è necessario ricrearlo.

La direttiva **#import** partecipa anche alla ricompilazione minima e può essere inserita in un file di intestazione precompilato.  Per altre informazioni, vedere [creazione di file di intestazione precompilata](../build/creating-precompiled-header-files.md).

### <a name="primary-type-library-header-file"></a><a name="_predir_the_primary_type_library_header_file"></a> File di intestazione della libreria di tipi primario

Il file di intestazione principale della libreria dei tipi è costituito da sette sezioni:

- Boilerplate di intestazione: include i commenti, l'istruzione `#include` per COMDEF.H (che definisce alcune macro standard utilizzate nell'intestazione) e altre informazioni varie sull'installazione.

- Riferimenti in avanti e typedef: includono le dichiarazioni di struttura come `struct IMyInterface` e typedef.

- Dichiarazioni del puntatore intelligente: la classe modello `_com_ptr_t` è un puntatore intelligente. Incapsula i puntatori di interfaccia ed elimina la necessità di chiamare le `AddRef` funzioni, `Release` e `QueryInterface` . Viene inoltre nascosta la `CoCreateInstance` chiamata al momento della creazione di un nuovo oggetto com. In questa sezione viene utilizzata l'istruzione macro `_COM_SMARTPTR_TYPEDEF` per definire typedef di interfacce com come specializzazioni di modelli della classe modello [_com_ptr_t](../cpp/com-ptr-t-class.md) . Per l'interfaccia, ad esempio, `IMyInterface` . Il file TLH conterrà:

    ```TLH
    _COM_SMARTPTR_TYPEDEF(IMyInterface, __uuidof(IMyInterface));
    ```

   in cui si espanderà il compilatore:

    ```cpp
    typedef _com_ptr_t<_com_IIID<IMyInterface, __uuidof(IMyInterface)> > IMyInterfacePtr;
    ```

   Il tipo `IMyInterfacePtr` può essere quindi utilizzato al posto del puntatore a interfaccia raw `IMyInterface*`. Di conseguenza, non è necessario chiamare le varie `IUnknown` funzioni membro

- Dichiarazioni TypeInfo: principalmente è costituito da definizioni di classe e altri elementi che espongono i singoli elementi typeinfo restituiti da `ITypeLib:GetTypeInfo` . In questa sezione, ogni elemento typeinfo della libreria dei tipi si riflette nell'intestazione in un formato che dipende dalle informazioni `TYPEKIND`.

- Definizione di GUID obsoleta facoltativa: contiene le inizializzazioni delle costanti GUID denominate. Questi nomi hanno il formato `CLSID_CoClass` e `IID_Interface` , simili a quelli generati dal compilatore MIDL.

- Istruzione `#include` per l'intestazione secondaria della libreria dei tipi.

- Boilerplate del piè di pagina: attualmente include `#pragma pack(pop)`.

Tutte le sezioni, ad eccezione della sezione dell'intestazione standard e del piè di pagina, sono racchiuse in uno spazio dei nomi con il nome specificato dall' `library` istruzione nel file IDL originale. È possibile usare i nomi dell'intestazione della libreria dei tipi per una qualificazione esplicita usando il nome dello spazio dei nomi. In alternativa, è possibile includere l'istruzione seguente:

```cpp
using namespace MyLib;
```

immediatamente dopo l'istruzione **#import** nel codice sorgente.

Lo spazio dei nomi può essere eliminato utilizzando l'attributo [no_namespace](no-namespace.md)) della direttiva **#import** . Tuttavia, l'eliminazione dello spazio dei nomi può causare conflitti di nomi. Lo spazio dei nomi può essere rinominato anche dall'attributo [rename_namespace](rename-namespace.md) .

Il compilatore fornisce il percorso completo di qualsiasi dipendenza della libreria dei tipi richiesta dalla libreria dei tipi attualmente elaborata. Il percorso viene scritto, sotto forma di commenti, nell'intestazione della libreria dei tipi (TLH) generata dal compilatore per ogni libreria dei tipi elaborata.

Se una libreria dei tipi include riferimenti ai tipi definiti in altre librerie dei tipi, il file con estensione THL includerà commenti del seguente tipo:

```TLH
//
// Cross-referenced type libraries:
//
//  #import "c:\path\typelib0.tlb"
//
```

Il nome file effettivo nel commento **#import** è il percorso completo della libreria dei tipi a cui si fa riferimento incrociato, come archiviato nel registro di sistema. Se si verificano errori causati da definizioni di tipi mancanti, controllare i commenti all'inizio del. TLH per individuare le librerie dei tipi dipendenti che devono essere importate per prime. Gli errori possibili sono quelli di sintassi (ad esempio C2143, C2146, C2321), C2501 (specificatori decimali mancanti), oppure C2433 ("inline" non consentito nella dichiarazione di dati) durante la compilazione del file con estensione TLI.

Per risolvere gli errori di dipendenza, determinare quale dei commenti di dipendenza non sono forniti in altro modo dalle intestazioni di sistema, quindi fornire una direttiva **#import** a un certo punto prima della direttiva **#import** della libreria dei tipi dipendente.

### <a name="import-attributes"></a><a name="_predir_the_23import_directive_import_attributes"></a> attributi di #import

**#import** può includere facoltativamente uno o più attributi. Questi attributi indicano al compilatore di modificare il contenuto delle intestazioni della libreria dei tipi. **\\** È possibile utilizzare un simbolo di barra rovesciata () per includere altre righe in un'unica istruzione **#import** . Ad esempio:

```cpp
#import "test.lib" no_namespace \
   rename("OldName", "NewName")
```

Per ulteriori informazioni, vedere [#import attributi](../preprocessor/hash-import-attributes-cpp.md).

**Fine sezione specifica C++**

## <a name="see-also"></a>Vedi anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)\
[Supporto COM del compilatore](../cpp/compiler-com-support.md)
