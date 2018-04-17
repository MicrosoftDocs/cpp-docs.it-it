---
title: -utf-8 (Imposta origine e file eseguibile di set di caratteri UTF-8) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- /utf-8
dev_langs:
- C++
helpviewer_keywords:
- /utf-8 compiler option
ms.assetid: f0e1f3cb-6cae-46eb-9483-04ed13d9b504
caps.latest.revision: 3
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e51db101db10b0461d7e9aa76b62319989d9f7d0
ms.sourcegitcommit: 770f6c4a57200aaa9e8ac6e08a3631a4b4bdca05
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/16/2018
---
# <a name="utf-8-set-source-and-executable-character-sets-to-utf-8"></a>/UTF-8 (Imposta origine ed eseguibile set di caratteri UTF-8)
Specifica il set di caratteri di origine e del set di caratteri di esecuzione come UTF-8.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/utf-8  
```  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare il **/utf-8** opzione per specificare il carattere di origine e di esecuzione imposta la codifica UTF-8. Equivale a specificare **/origine-charset:utf-/execution 8-charset:utf-8** nella riga di comando. Una di queste opzioni anche consente il **/validate-charset** opzione per impostazione predefinita. Per un elenco di identificatori di pagina di codice è supportata e i nomi del set di caratteri, vedere [codice pagina identificatori](http://msdn.microsoft.com/library/windows/desktop/dd317756).  
  
 Per impostazione predefinita, Visual Studio rileva un contrassegno di ordine dei byte per determinare se il file di origine è in un formato di codifica Unicode, ad esempio UTF-16 o UTF-8. Se viene individuato alcun indicatore di ordine dei byte, si presuppone che il file di origine viene codificato utilizzando la pagina di codice utente corrente, a meno che non è specificata una tabella codici **/utf-8** o **/source-charset** opzione. Visual Studio consente di salvare il codice sorgente C++ utilizzando una delle codifiche di caratteri diversi. Per informazioni sui set di caratteri di origine e di esecuzione, vedere [set di caratteri](../../cpp/character-sets.md) nella documentazione del linguaggio.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione**, **C/C++**, **riga di comando** cartella.  
  
3.  In **opzioni avanzate**, aggiungere il **/utf-8** opzione e specificare la codifica preferita.  
  
4.  Scegliere **OK** per salvare le modifiche.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [/Execution-CharSet (impostare esecuzione Character Set)](../../build/reference/execution-charset-set-execution-character-set.md)   
 [/Source-CharSet (impostare origine Character Set)](../../build/reference/source-charset-set-source-character-set.md)   
 [/validate/charset (convalida per i caratteri compatibili)](../../build/reference/validate-charset-validate-for-compatible-characters.md)