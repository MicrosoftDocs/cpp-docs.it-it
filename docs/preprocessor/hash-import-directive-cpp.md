---
title: '#importare (direttiva) (C++) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- '#import'
dev_langs:
- C++
helpviewer_keywords:
- .tlh files
- '#import directive'
- import directive (#import)
- tlh files
- tlbid switch
- preprocessor, directives
- COM, type library header file
ms.assetid: 787d1112-e543-40d7-ab15-a63d43f4030a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4e649e458a6275ea369031416c379721c3f9af0e
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33847907"
---
# <a name="import-directive-c"></a>Direttiva #import (C++)
**Sezione specifica C++**  
  
 Utilizzato per incorporare le informazioni di una libreria dei tipi. Il contenuto della libreria dei tipi viene convertito in classi C++ che descrivono principalmente le interfacce COM.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#import "filename" [attributes]  
#import <filename> [attributes]  
```  
  
#### <a name="parameters"></a>Parametri  
 *filename*  
 Specifica la libreria dei tipi da importare. `filename` può corrispondere a uno dei seguenti nomi:  
  
-   Il nome di un file contenente una libreria dei tipi, ad esempio un file OLB, TLB o DLL. La parola chiave, **file:**, può essere preceduto ogni nome di file.  
  
-   Il ProgID di un controllo nella libreria dei tipi. La parola chiave, **progid:**, può essere preceduto ciascun progid. Ad esempio:  
  
    ```  
    #import "progid:my.prog.id.1.5"  
    ```  
  
     Per ulteriori informazioni sui ProgID, vedere [specificando l'ID di localizzazione e numero di versione](#_predir_the_23import_directive_specifyingthelocalizationidandversionnumber).  
  
     Notare che quando si esegue la compilazione con un compilatore incrociato in un sistema operativo a 64 bit, il compilatore sarà in grado di leggere solo gli hive del Registro di sistema a 32 bit. È possibile utilizzare il compilatore a 64 bit nativo per compilare e registrare una libreria dei tipi a 64 bit.  
  
-   ID di libreria della libreria dei tipi. La parola chiave, **libid:**, può essere preceduto ogni ID di libreria. Ad esempio:  
  
    ```  
    #import "libid:12341234-1234-1234-1234-123412341234" version("4.0") lcid("9")  
    ```  
  
     Se non si specifica versione o lcid, le [regole](#_predir_the_23import_directive_specifyingthelocalizationidandversionnumber) applicate alle **progid:** vengono applicate anche agli **libid:**.  
  
-   Un file eseguibile (EXE).  
  
-   Un file di libreria (DLL) contenente una risorsa della libreria dei tipi (ad esempio ocx).  
  
-   Un documento composito contenente una libreria dei tipi.  
  
-   Qualsiasi altro formato di file che possa essere facilmente il **LoadTypeLib** API.  
  
 `attributes`  
 Uno o più [#import attributi](#_predir_the_23import_directive_import_attributes). Separare gli attributi con uno spazio o una virgola. Ad esempio:  
  
```  
#import "..\drawctl\drawctl.tlb" no_namespace, raw_interfaces_only  
```  
  
 oppure  
  
```  
#import "..\drawctl\drawctl.tlb" no_namespace raw_interfaces_only  
```  
  
## <a name="remarks"></a>Note  
  
##  <a name="_predir_the_23import_directive_searchorderforfilename"></a> Ordine di ricerca per nome di file  
 *nome del file* può essere preceduto da una specifica di directory. Il nome file deve essere il nome di un file esistente. La differenza tra le due forme di sintassi è costituita dall'ordine in cui il preprocessore cerca i file della libreria dei tipi quando il percorso è specificato in modo incompleto.  
  
|Forma di sintassi|Operazione|  
|-----------------|------------|  
|Formato con virgolette|Indica al preprocessore di cercare i file della libreria dei tipi innanzitutto nella directory del file contenente l'istruzione `#import`, quindi nelle directory dei file che includono (`#include`) tali file. Il preprocessore effettua quindi la ricerca nei percorsi indicati di seguito.|  
|Formato con parentesi angolari|Indica al preprocessore di cercare i file della libreria dei tipi nei percorsi seguenti:<br /><br /> 1.  Il **percorso** elenco dei percorsi delle variabili di ambiente<br />2.  Il **LIB** elenco dei percorsi delle variabili di ambiente<br />3.  Il percorso specificato dal parametro (altre directory di inclusione) opzione del compilatore, ma il compilatore sta cercando di una libreria dei tipi di riferimento da un'altra libreria dei tipi con il [no_registry](../preprocessor/no-registry.md) attributo.|  
  
##  <a name="_predir_the_23import_directive_specifyingthelocalizationidandversionnumber"></a> Specifica l'ID di localizzazione e del numero di versione  
 Quando si specifica un ProgID, è anche possibile specificare i relativi ID di localizzazione e numero di versione. Ad esempio:  
  
```  
#import "progid:my.prog.id" lcid("0") version("4.0)  
```  
  
 Se non si specifica un ID di localizzazione, viene scelto un ProgID in base alle regole seguenti:  
  
-   Se esiste un solo ID di localizzazione, viene utilizzato tale ID.  
  
-   Se esiste più di un ID di localizzazione, viene utilizzato il primo con il numero di versione 0, 9 o 409.  
  
-   Se esiste più di un ID di localizzazione e nessuno di essi è 0, 9 o 409, viene utilizzato l'ultimo.  
  
-   Se non si specifica un numero di versione, viene utilizzata la versione più recente.  
  
##  <a name="_predir_the_23import_directive_header_files_created_by_import"></a> File di intestazione creati durante l'importazione  
 `#import` crea due file di intestazione che ricostruiscono il contenuto della libreria dei tipi nel codice sorgente C++. Il file di intestazione principale è simile a quello prodotto dal compilatore MIDL (Microsoft Interface Definition Language), ma con ulteriori dati e codice generato dal compilatore. Il [file di intestazione principale](#_predir_the_primary_type_library_header_file) ha lo stesso nome di base della libreria dei tipi, oltre a una. Estensione TLH. Il file di intestazione secondario è costituito dallo stesso nome di base della libreria dei tipi seguito dall'estensione TLI. Contiene le implementazioni per le funzioni membro generate dal compilatore ed è incluso (`#include`) nel file di intestazione principale.  
  
 Se si importa una proprietà dispinterface che utilizza i parametri byref, #import non genererà declspec ([proprietà](../cpp/property-cpp.md)) istruzione per la funzione.  
  
 Entrambi i file di intestazione vengono inseriti nella directory di output specificata dall'opzione /Fo (Specifica un file oggetto). Vengono quindi letti e compilati dal compilatore come se il file di intestazione principale venisse denominato da una direttiva `#include`.  
  
 Le seguenti ottimizzazioni del compilatore vengono fornite con la direttiva `#import`:  
  
-   Al momento della creazione, al file di intestazione viene assegnato lo stesso timestamp della libreria dei tipi.  
  
-   Durante l'elaborazione di `#import`, il compilatore controlla innanzitutto se l'intestazione esiste ed è aggiornata. In caso affermativo, non è necessario ricrearla.  
  
 La direttiva `#import` partecipa anche alla ricompilazione minima e può essere inserita in un file di intestazione precompilato. Vedere [la creazione di file di intestazione precompilata](../build/reference/creating-precompiled-header-files.md) per ulteriori informazioni.  
  
###  <a name="_predir_the_primary_type_library_header_file"></a> File di intestazione di libreria di tipi primaria  
 Il file di intestazione principale della libreria dei tipi è costituito da sette sezioni:  
  
-   Boilerplate di intestazione: include i commenti, l'istruzione `#include` per COMDEF.H (che definisce alcune macro standard utilizzate nell'intestazione) e altre informazioni varie sull'installazione.  
  
-   Riferimenti in avanti e typedef: includono le dichiarazioni di struttura come `struct IMyInterface` e typedef.  
  
-   Dichiarazioni del puntatore intelligente: la classe modello `_com_ptr_t` è un'implementazione di puntatore intelligente che incapsula i puntatori di interfaccia ed elimina la necessità di chiamare `AddRef`, **versione**, `QueryInterface` funzioni. Nasconde inoltre la chiamata a `CoCreateInstance` durante la creazione di un nuovo oggetto COM. In questa sezione viene utilizzata l'istruzione di macro **COM_SMARTPTR_TYPEDEF** per definire i typedef delle interfacce COM come specializzazioni del [com_ptr_t](../cpp/com-ptr-t-class.md) classe modello. Ad esempio, per l'interfaccia **IMyInterface**,. File TLH conterrà:  
  
    ```  
    _COM_SMARTPTR_TYPEDEF(IMyInterface, __uuidof(IMyInterface));  
    ```  
  
     in cui si espanderà il compilatore:  
  
    ```  
    typedef _com_ptr_t<_com_IIID<IMyInterface, __uuidof(IMyInterface)> > IMyInterfacePtr;  
    ```  
  
     Il tipo `IMyInterfacePtr` può essere quindi utilizzato al posto del puntatore a interfaccia raw `IMyInterface*`. Di conseguenza, non è necessario chiamare le varie **IUnknown** funzioni membro  
  
-   Dichiarazioni TypeInfo: principalmente costituite da definizioni di classi e altri elementi che espongono i singoli elementi typeinfo restituiti da **ITypeLib: GetTypeInfo**. In questa sezione, ogni elemento typeinfo della libreria dei tipi si riflette nell'intestazione in un formato che dipende dalle informazioni `TYPEKIND`.  
  
-   Definizione di GUID obsoleta facoltativa: contiene le inizializzazioni delle costanti GUID denominate. Questi sono i nomi nel formato **CLSID_CoClass** e **IID_Interface**, simili a quelli generati dal compilatore MIDL.  
  
-   Istruzione `#include` per l'intestazione secondaria della libreria dei tipi.  
  
-   Boilerplate del piè di pagina: attualmente include `#pragma pack(pop)`.  
  
 Tutte le sezioni, ad eccezione di sezione dell'intestazione standard e i piè di pagina boilerplate, sono racchiusi tra uno spazio dei nomi con il nome specificato per il **libreria** istruzione nel file IDL originale. È possibile utilizzare i nomi dell'intestazione della libreria dei tipi mediante una qualificazione esplicita con il nome dello spazio dei nomi oppure includendo la seguente istruzione:  
  
```  
using namespace MyLib;  
```  
  
 immediatamente dopo l'istruzione `#import` nel codice sorgente.  
  
 Lo spazio dei nomi può essere soppresso mediante il [no_namespace](#_predir_no_namespace) attributo del `#import` direttiva. Tuttavia, l'eliminazione dello spazio dei nomi può causare conflitti di nomi. Lo spazio dei nomi può essere rinominato per il [rename_namespace](#_predir_rename_namespace) attributo.  
  
 Il compilatore fornisce il percorso completo di qualsiasi dipendenza della libreria dei tipi richiesta dalla libreria dei tipi attualmente elaborata. Il percorso viene scritto, sotto forma di commenti, nell'intestazione della libreria dei tipi (TLH) generata dal compilatore per ogni libreria dei tipi elaborata.  
  
 Se una libreria dei tipi include riferimenti ai tipi definiti in altre librerie dei tipi, il file con estensione THL includerà commenti del seguente tipo:  
  
```  
//  
// Cross-referenced type libraries:  
//  
//  #import "c:\path\typelib0.tlb"  
//  
```  
  
 Il nome del file effettivo nel commento `#import` costituisce il percorso completo della libreria dei tipi a cui è stato fatto un riferimento incrociato, così come viene archiviato nel Registro di sistema. Se si verificano errori a causa di definizioni di tipi mancanti, controllare i commenti all'inizio del file con estensione THL per vedere quali librerie dei tipi dipendenti è necessario importare per prime. Gli errori possibili sono quelli di sintassi (ad esempio C2143, C2146, C2321), C2501 (specificatori decimali mancanti), oppure C2433 ("inline" non consentito nella dichiarazione di dati) durante la compilazione del file con estensione TLI.  
  
 È necessario determinare quali dei commenti di dipendenza non vengono diversamente forniti dalle intestazioni di sistema e fornire una direttiva `#import` in un determinato punto prima della direttiva `#import` della libreria dei tipi dipendente per risolvere gli errori.  
  
 Per ulteriori informazioni, vedere l'articolo della Knowledge Base "I metodi wrapper #import potrebbero causare una violazione di accesso" (Q242527) o "Errori del compilatore quando si utilizza #import con XML" (Q269194). È possibile trovare articoli della Knowledge Base nel supporto di MSDN Library o all'indirizzo [supporto Microsoft](https://support.microsoft.com/).  
  
##  <a name="_predir_the_23import_directive_import_attributes"></a> attributi #import  
 `#import` può includere facoltativamente uno o più attributi. Questi attributi indicano al compilatore di modificare il contenuto delle intestazioni della libreria dei tipi. Una barra rovesciata (**\\**) può essere utilizzato per includere altre righe in un singolo simbolo `#import` istruzione. Ad esempio:  
  
```  
#import "test.lib" no_namespace \  
   rename("OldName", "NewName")  
```  
  
 Per ulteriori informazioni, vedere [#import attributi](../preprocessor/hash-import-attributes-cpp.md).  
  
 **Fine sezione specifica C++**  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive del preprocessore](../preprocessor/preprocessor-directives.md)   
 [Supporto COM del compilatore](../cpp/compiler-com-support.md)
