---
title: -origine-set di caratteri (Set di caratteri di origine Set) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
f1_keywords:
- source-charset
- /source-charset
dev_langs:
- C++
helpviewer_keywords:
- /execution-charset compiler option
ms.assetid: d3c5bf7f-526d-4ee4-acc5-c1a02a4fc481
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e4f010eb0f0b83dbc41ebeff624033e59d582535
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="source-charset-set-source-character-set"></a>/Source-CharSet (impostare origine Character Set)
Consente di specificare l'origine set di caratteri per il file eseguibile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/source-charset:[IANA_name|.CPID]  
```  
  
## <a name="arguments"></a>Argomenti  
 **IANA_name**  
 Nome del set di caratteri definito dall'autorità IANA.  
  
 **CPID**  
 Identificatore della tabella codici come numero decimale.  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare il **/source-charset** opzione per specificare un carattere esteso origine set da utilizzare quando i file di origine includono caratteri che non sono rappresentati nel set di caratteri di origine di base. Il set di caratteri di origine è la codifica usata per interpretare il testo di origine del programma nella rappresentazione interna utilizzata come input per le fasi di pre-elaborazione prima della compilazione. La rappresentazione interna viene quindi convertita al set di caratteri di esecuzione per archiviare i valori stringa e carattere nel file eseguibile. È possibile utilizzare entrambi IANA o nome del set di caratteri ISO o un punto (.) seguito da un identificatore di pagina di codice decimale da 3 a 5 cifre per specificare il set di caratteri da utilizzare. Per un elenco di identificatori di pagina di codice è supportata e i nomi del set di caratteri, vedere [codice pagina identificatori](http://msdn.microsoft.com/library/windows/desktop/dd317756).  
  
 Per impostazione predefinita, Visual Studio rileva un contrassegno di ordine dei byte per determinare se il file di origine è in un formato di codifica Unicode, ad esempio UTF-16 o UTF-8. Se viene individuato alcun indicatore di ordine dei byte, si presuppone che il file di origine viene codificato utilizzando la pagina di codice utente corrente, se non si specifica un set di caratteri nome o la tabella codici utilizzando il **/source-charset** opzione. Visual Studio consente di salvare il codice sorgente C++ utilizzando una delle codifiche di caratteri diversi. Per ulteriori informazioni sui set di caratteri di origine e di esecuzione, vedere [set di caratteri](../../cpp/character-sets.md) nella documentazione del linguaggio.  
  
 Il set di caratteri di origine che è fornire necessario eseguire il mapping di caratteri ASCII a 7 bit gli stessi punti di codice nel set di caratteri o errori di compilazione sono probabile che seguono. Il set di caratteri di origine deve essere disponibile per il mapping a caratteri estesi Unicode codificabili impostazione UTF-8. Caratteri non codificabili in UTF-8 sono rappresentati da un sostituto specifiche dell'implementazione. Il compilatore Microsoft utilizza un punto interrogativo per tali caratteri.  
  
 Se si desidera impostare il set di caratteri di origine e il set di caratteri di esecuzione su UTF-8, è possibile utilizzare il **/utf-8** l'opzione del compilatore come collegamento. Equivale a specificare **/origine-charset:utf-/execution 8-charset:utf-8** nella riga di comando. Una di queste opzioni anche consente il **/validate-charset** opzione per impostazione predefinita.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione**, **C/C++**, **riga di comando** cartella.  
  
3.  In **opzioni avanzate**, aggiungere il **/source-charset** opzione e specificare la codifica preferita.  
  
4.  Scegliere **OK** per salvare le modifiche.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [/Execution-CharSet (impostare esecuzione Character Set)](../../build/reference/execution-charset-set-execution-character-set.md)   
 [/UTF-8 (Imposta origine ed eseguibile set di caratteri UTF-8)](../../build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8.md)   
 [/validate/charset (convalida per i caratteri compatibili)](../../build/reference/validate-charset-validate-for-compatible-characters.md)