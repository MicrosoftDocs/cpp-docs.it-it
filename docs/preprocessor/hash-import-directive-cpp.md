---
title: "Direttiva #import (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "#import"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "#import (direttiva)"
  - "file .tlh"
  - "COM, file di intestazione della libreria dei tipi"
  - "import (direttiva) (#import)"
  - "preprocessore, direttive"
  - "tlbid (opzione)"
  - "file tlh"
ms.assetid: 787d1112-e543-40d7-ab15-a63d43f4030a
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Direttiva #import (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica C\+\+**  
  
 Utilizzato per incorporare le informazioni di una libreria dei tipi.  Il contenuto della libreria dei tipi viene convertito in classi C\+\+ che descrivono principalmente le interfacce COM.  
  
## Sintassi  
  
```  
#import "filename" [attributes]  
#import <filename> [attributes]  
```  
  
#### Parametri  
 *filename*  
 Specifica la libreria dei tipi da importare.  `filename` può corrispondere a uno dei seguenti nomi:  
  
-   Il nome di un file contenente una libreria dei tipi, ad esempio un file OLB, TLB o DLL.  Ciascun nome di file può essere preceduto dalla parola chiave **file:**.  
  
-   Il ProgID di un controllo nella libreria dei tipi.  Ciascun ProgID può essere preceduto dalla parola chiave **progid:**.  Ad esempio:  
  
    ```  
    #import "progid:my.prog.id.1.5"  
    ```  
  
     Per ulteriori informazioni sui ProgID, vedere [Specifica dell'ID di localizzazione e del numero di versione](#_predir_the_23import_directive_specifyingthelocalizationidandversionnumber).  
  
     Notare che quando si esegue la compilazione con un compilatore incrociato in un sistema operativo a 64 bit, il compilatore sarà in grado di leggere solo gli hive del Registro di sistema a 32 bit.  È possibile utilizzare il compilatore a 64 bit nativo per compilare e registrare una libreria dei tipi a 64 bit.  
  
-   ID di libreria della libreria dei tipi.  Ciascun ID di libreria può essere preceduto dalla parola chiave **libid:**.  Ad esempio:  
  
    ```  
    #import "libid:12341234-1234-1234-1234-123412341234" version("4.0") lcid("9")  
    ```  
  
     Se non si specifica la versione o lcid, le [regole](#_predir_the_23import_directive_specifyingthelocalizationidandversionnumber) applicate a **ProgID:** vengono applicate anche a **libid:**.  
  
-   Un file eseguibile \(EXE\).  
  
-   Un file di libreria \(DLL\) contenente una risorsa della libreria dei tipi \(ad esempio ocx\).  
  
-   Un documento composito contenente una libreria dei tipi.  
  
-   Qualsiasi altro formato di file che può essere riconosciuto dall'API **LoadTypeLib**.  
  
 `attributes`  
 Uno o più [attributi \#import](#_predir_the_23import_directive_import_attributes).  Separare gli attributi con uno spazio o una virgola.  Ad esempio:  
  
```  
#import "..\drawctl\drawctl.tlb" no_namespace, raw_interfaces_only  
```  
  
 \-oppure\-  
  
```  
#import "..\drawctl\drawctl.tlb" no_namespace raw_interfaces_only  
```  
  
## Note  
  
##  <a name="_predir_the_23import_directive_searchorderforfilename"></a> Ordine di ricerca del nome del file  
 *filename* può essere preceduto da una specifica della directory.  Il nome file deve essere il nome di un file esistente.  La differenza tra le due forme di sintassi è costituita dall'ordine in cui il preprocessore cerca i file della libreria dei tipi quando il percorso è specificato in modo incompleto.  
  
|Forma di sintassi|Azione|  
|-----------------------|------------|  
|Formato con virgolette|Indica al preprocessore di cercare i file della libreria dei tipi innanzitutto nella directory del file contenente l'istruzione `#import`, quindi nelle directory dei file che includono \(`#include`\) tali file.  Il preprocessore effettua quindi la ricerca nei percorsi indicati di seguito.|  
|Formato con parentesi angolari|Indica al preprocessore di cercare i file della libreria dei tipi nei seguenti percorsi:<br /><br /> 1.  Elenco dei percorsi delle variabili di ambiente **PATH**<br />2.  Elenco dei percorsi delle variabili di ambiente **LIB**<br />3.  Il percorso specificato dall'opzione del compilatore \/I \(directory di inclusione aggiuntive\), con la differenza che il compilatore cerca una libreria dei tipi a cui viene fatto riferimento da un'altra libreria dei tipi con l'attributo [no\_registry](../preprocessor/no-registry.md).|  
  
##  <a name="_predir_the_23import_directive_specifyingthelocalizationidandversionnumber"></a> Specifica dell'ID di localizzazione e del numero di versione  
 Quando si specifica un ProgID, è anche possibile specificare i relativi ID di localizzazione e numero di versione.  Ad esempio:  
  
```  
#import "progid:my.prog.id" lcid("0") version("4.0)  
```  
  
 Se non si specifica un ID di localizzazione, viene scelto un ProgID in base alle regole seguenti:  
  
-   Se esiste un solo ID di localizzazione, viene utilizzato tale ID.  
  
-   Se esiste più di un ID di localizzazione, viene utilizzato il primo con il numero di versione 0, 9 o 409.  
  
-   Se esiste più di un ID di localizzazione e nessuno di essi è 0, 9 o 409, viene utilizzato l'ultimo.  
  
-   Se non si specifica un numero di versione, viene utilizzata la versione più recente.  
  
##  <a name="_predir_the_23import_directive_header_files_created_by_import"></a> File di intestazione creati dall'importazione  
 `#import` crea due file di intestazione che ricostruiscono il contenuto della libreria dei tipi nel codice sorgente C\+\+.  Il file di intestazione principale è simile a quello prodotto dal compilatore MIDL \(Microsoft Interface Definition Language\), ma con ulteriori dati e codice generato dal compilatore.  Il [file di intestazione principale](#_predir_the_primary_type_library_header_file) è costituito dallo stesso nome di base della libreria dei tipi seguito dall'estensione TLH.  Il file di intestazione secondario è costituito dallo stesso nome di base della libreria dei tipi seguito dall'estensione TLI.  Contiene le implementazioni per le funzioni membro generate dal compilatore ed è incluso \(`#include`\) nel file di intestazione principale.  
  
 Se si importa una proprietà dispinterface che utilizza i parametri byref, \#import non genererà l'istruzione \_\_declspec \([property](../cpp/property-cpp.md)\) per la funzione.  
  
 Entrambi i file di intestazione vengono inseriti nella directory di output specificata dall'opzione \/Fo \(Specifica un file oggetto\).  Vengono quindi letti e compilati dal compilatore come se il file di intestazione principale venisse denominato da una direttiva `#include`.  
  
 Le seguenti ottimizzazioni del compilatore vengono fornite con la direttiva `#import`:  
  
-   Al momento della creazione, al file di intestazione viene assegnato lo stesso timestamp della libreria dei tipi.  
  
-   Durante l'elaborazione di `#import`, il compilatore controlla innanzitutto se l'intestazione esiste ed è aggiornata.  In caso affermativo, non è necessario ricrearla.  
  
 La direttiva `#import` partecipa anche alla ricompilazione minima e può essere inserita in un file di intestazione precompilato.  Per ulteriori informazioni, vedere [Creazione di file di intestazione precompilati](../build/reference/creating-precompiled-header-files.md).  
  
###  <a name="_predir_the_primary_type_library_header_file"></a> File di intestazione principale della libreria dei tipi  
 Il file di intestazione principale della libreria dei tipi è costituito da sette sezioni:  
  
-   Boilerplate di intestazione: include i commenti, l'istruzione `#include` per COMDEF.H \(che definisce alcune macro standard utilizzate nell'intestazione\) e altre informazioni varie sull'installazione.  
  
-   Riferimenti in avanti e typedef: includono le dichiarazioni di struttura come `struct IMyInterface` e typedef.  
  
-   Dichiarazioni del puntatore intelligente: la classe modello `_com_ptr_t` è un'implementazione del puntatore intelligente che incapsula i puntatori alle interfacce ed elimina la necessità di chiamare le funzioni `AddRef`, **Release** e `QueryInterface`.  Nasconde inoltre la chiamata a `CoCreateInstance` durante la creazione di un nuovo oggetto COM.  Questa sezione utilizza l'istruzione di macro **\_COM\_SMARTPTR\_TYPEDEF** per definire i typedef delle interfacce COM come specializzazioni di modello della classe modello [\_com\_ptr\_t](../cpp/com-ptr-t-class.md).  Ad esempio, per l'interfaccia **IMyInterface**, il file con estensione TLH conterrà:  
  
    ```  
    _COM_SMARTPTR_TYPEDEF(IMyInterface, __uuidof(IMyInterface));  
    ```  
  
     in cui si espanderà il compilatore:  
  
    ```  
    typedef _com_ptr_t<_com_IIID<IMyInterface, __uuidof(IMyInterface)> > IMyInterfacePtr;  
    ```  
  
     Il tipo `IMyInterfacePtr` può essere quindi utilizzato al posto del puntatore a interfaccia raw `IMyInterface*`.  Non è quindi necessario chiamare le varie funzioni membro **IUnknown**  
  
-   Dichiarazioni Typeinfo: sono principalmente costituite da definizioni di classi e altri elementi che espongono i singoli elementi typeinfo restituiti da **ITypeLib:GetTypeInfo**.  In questa sezione, ogni elemento typeinfo della libreria dei tipi si riflette nell'intestazione in un formato che dipende dalle informazioni `TYPEKIND`.  
  
-   Definizione di GUID obsoleta facoltativa: contiene le inizializzazioni delle costanti GUID denominate.  Si tratta di nomi nel formato **CLSID\_CoClass** e **IID\_Interface**, simili a quelli generati dal compilatore MIDL.  
  
-   Istruzione `#include` per l'intestazione secondaria della libreria dei tipi.  
  
-   Boilerplate del piè di pagina: attualmente include `#pragma pack(pop)`.  
  
 Tutte le sezioni, tranne la sezione boilerplate dell'intestazione e boilerplate del piè di pagina, sono racchiuse in uno spazio dei nomi con il nome specificato dall'istruzione di **libreria** nel file IDL originale.  È possibile utilizzare i nomi dell'intestazione della libreria dei tipi mediante una qualificazione esplicita con il nome dello spazio dei nomi oppure includendo la seguente istruzione:  
  
```  
using namespace MyLib;  
```  
  
 immediatamente dopo l'istruzione `#import` nel codice sorgente.  
  
 Lo spazio dei nomi può essere soppresso mediante l'attributo [no\_namespace](#_predir_no_namespace) della direttiva `#import`.  Tuttavia, l'eliminazione dello spazio dei nomi può causare conflitti di nomi.  Lo spazio dei nomi può essere rinominato dall'attributo [rename\_namespace](#_predir_rename_namespace).  
  
 Il compilatore fornisce il percorso completo di qualsiasi dipendenza della libreria dei tipi richiesta dalla libreria dei tipi attualmente elaborata.  Il percorso viene scritto, sotto forma di commenti, nell'intestazione della libreria dei tipi \(TLH\) generata dal compilatore per ogni libreria dei tipi elaborata.  
  
 Se una libreria dei tipi include riferimenti ai tipi definiti in altre librerie dei tipi, il file con estensione THL includerà commenti del seguente tipo:  
  
```  
//  
// Cross-referenced type libraries:  
//  
//  #import "c:\path\typelib0.tlb"  
//  
```  
  
 Il nome del file effettivo nel commento `#import` costituisce il percorso completo della libreria dei tipi a cui è stato fatto un riferimento incrociato, così come viene archiviato nel Registro di sistema.  Se si verificano errori a causa di definizioni di tipi mancanti, controllare i commenti all'inizio del file con estensione THL per vedere quali librerie dei tipi dipendenti è necessario importare per prime.  Gli errori possibili sono quelli di sintassi \(ad esempio C2143, C2146, C2321\), C2501 \(specificatori decimali mancanti\), oppure C2433 \("inline" non consentito nella dichiarazione di dati\) durante la compilazione del file con estensione TLI.  
  
 È necessario determinare quali dei commenti di dipendenza non vengono diversamente forniti dalle intestazioni di sistema e fornire una direttiva `#import` in un determinato punto prima della direttiva `#import` della libreria dei tipi dipendente per risolvere gli errori.  
  
 Per ulteriori informazioni, vedere l'articolo della Knowledge Base "I metodi wrapper \#import potrebbero causare una violazione di accesso" \(Q242527\) o "Errori del compilatore quando si utilizza \#import con XML" \(Q269194\).  Gli articoli della Knowledge Base sono disponibili nei supporti di MSDN Library o all'indirizzo [http:\/\/support.microsoft.com\/support\/](http://support.microsoft.com/support/).  
  
##  <a name="_predir_the_23import_directive_import_attributes"></a> Attributi \#import  
 `#import` può includere facoltativamente uno o più attributi.  Questi attributi indicano al compilatore di modificare il contenuto delle intestazioni della libreria dei tipi.  È possibile utilizzare il simbolo della barra rovesciata \(**\\**\) per includere altre righe in un'unica istruzione `#import`.  Ad esempio:  
  
```  
#import "test.lib" no_namespace \  
   rename("OldName", "NewName")  
```  
  
 Per ulteriori informazioni, vedere [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md).  
  
 **Fine sezione specifica C\+\+**  
  
## Vedere anche  
 [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)   
 [Supporto COM del compilatore](../cpp/compiler-com-support.md)