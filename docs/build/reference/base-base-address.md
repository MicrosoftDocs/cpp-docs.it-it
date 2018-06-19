---
title: -BASE (indirizzo di Base) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /base
- VC.Project.VCLinkerTool.BaseAddress
dev_langs:
- C++
helpviewer_keywords:
- base addresses [C++]
- programs [C++], preventing relocation
- semicolon [C++], specifier
- -BASE linker option
- key address size
- environment variables [C++], LIB
- programs [C++], base address
- LIB environment variable
- BASE linker option
- DLLs [C++], linking
- /BASE linker option
- '@ symbol for base address'
- executable files [C++], base address
- at sign symbol for base address
ms.assetid: 00b9f6fe-0bd2-4772-a69c-7365eb199069
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c4090a3e8d2f9f3bdcb68875d94a1b84e7bff0f3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32376624"
---
# <a name="base-base-address"></a>/BASE (indirizzo di base)
```  
/BASE:{address[,size] | @filename,key}  
```  
  
 L'opzione BASE imposta un indirizzo di base per il programma, il percorso predefinito per un file DLL .exe viene sottoposto a override. L'indirizzo di base predefinito per un file .exe è 0x400000 per immagini a 32 bit o 0x140000000 per immagini a 64 bit. Per una DLL, l'indirizzo di base predefinita è 0x10000000 per immagini a 32 bit o 0x180000000 per immagini a 64 bit. Nei sistemi operativi che non supportano ASLR address space layout randomization () o quando è stata impostata l'opzione /DYNAMICBASE: No, il sistema operativo tenta innanzitutto di caricare un programma all'oggetto specificato o l'indirizzo di base predefinito. Se non è presente disponibile spazio sufficiente, il sistema consente di spostare il programma. Per impedire la rilocazione, utilizzare il [/fixed](../../build/reference/fixed-fixed-base-address.md) opzione.  
  
 Il linker genera un errore se *indirizzo* non è un multiplo di 64 KB. È possibile specificare le dimensioni del programma; il linker genera un avviso se il programma non è sufficiente la dimensione che è specificata.  
  
 Nella riga di comando, per specificare l'indirizzo di base è inoltre possibile utilizzare un file di risposta di indirizzo di base. Un file di risposta di indirizzo di base è un file di testo che contiene indirizzi di base e le dimensioni facoltative di tutte le DLL che verrà utilizzato il programma e una chiave di testo univoco per ogni indirizzo di base. Per specificare un indirizzo di base utilizzando un file di risposta, utilizzare un simbolo di chiocciola (@) seguita dal nome del file di risposta, *filename*, seguito da una virgola, quindi il `key` valore per l'indirizzo di base da utilizzare nel file. Il linker cerca *filename* del percorso specificato, o se viene specificato alcun percorso, nelle directory specificate nella variabile di ambiente LIB. Ogni riga in *filename* rappresenta una DLL e presenta la seguente sintassi:  
  
```  
  
key address [size] ;comment  
```  
  
 Il `key` è una stringa di caratteri alfanumerici e non viene fatta distinzione tra maiuscole e minuscole. In genere è il nome di una DLL, ma non è necessario. Il `key` è seguita da una base *indirizzo* in notazione del linguaggio C, esadecimale o decimale e un valore massimo `size`. Tutti i tre argomenti sono separati da spazi o tabulazioni. Il linker genera un avviso se l'oggetto specificato `size` è minore di spazio degli indirizzi virtuali necessario per il programma. Oggetto `comment` specificato da un punto e virgola (;) e può essere nello stesso o in una riga separata. Il linker Ignora tutto il testo da punto e virgola alla fine della riga. Questo esempio Mostra parte di tale file:  
  
```  
main   0x00010000    0x08000000    ; for PROJECT.exe  
one    0x28000000    0x00100000    ; for DLLONE.DLL  
two    0x28100000    0x00300000    ; for DLLTWO.DLL  
```  
  
 Se il file che contiene le righe seguenti è denominato DLLs, il comando di esempio seguente si applica queste informazioni:  
  
```  
link dlltwo.obj /dll /base:@dlls.txt,two  
```  
  
## <a name="remarks"></a>Note  
 Per motivi di sicurezza, Microsoft consiglia di utilizzare il [/DYNAMICBASE](../../build/reference/dynamicbase-use-address-space-layout-randomization.md) opzione anziché specificare indirizzi di base per i file eseguibili. Questo genera un'immagine eseguibile che può essere riassegnata in modo casuale in fase di caricamento utilizzando la funzionalità ASLR (randomization) di address space layout di Windows. Impostazione predefinita, l'opzione /DYNAMICBASE è attivo.  
  
 È inoltre possibile impostare l'indirizzo di base utilizzando il *BASE* argomento in un [nome](../../build/reference/name-c-cpp.md) o [libreria](../../build/reference/library.md) istruzione. /BASE e [/DLL](../../build/reference/dll-build-a-dll.md) equivale al **libreria** istruzione.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **Linker** cartella.  
  
3.  Scegliere il **avanzate** pagina delle proprietà.  
  
4.  Modificare il **indirizzo di Base** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.BaseAddress%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)