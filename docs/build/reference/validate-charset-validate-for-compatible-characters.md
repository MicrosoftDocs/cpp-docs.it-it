---
title: -convalidare-set di caratteri (convalida per i caratteri compatibile) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
f1_keywords:
- /validate-charset
- validate-charset
dev_langs:
- C++
helpviewer_keywords:
- /validate-charset compiler option
ms.assetid: 50360fd0-4d32-4a4f-95d0-53d38c12ad4c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0804d9d2714cc8c4f065b6908788c067c34ca44b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="validate-charset-validate-for-compatible-characters"></a>/Validate-CharSet (convalida per i caratteri compatibile)
Verifica che il testo del file di origine contenga solo caratteri rappresentabili come UTF-8.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/validate-charset[-]  
```  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare il **/validate-charset** opzione per convalidare che il codice sorgente contiene solo il set di caratteri che possono essere rappresentati in entrambi i caratteri di origine e il set di caratteri di esecuzione. Questo controllo è abilitato automaticamente quando si specifica **/source-charset**, **/execution-charset**, o **/utf-8** opzioni del compilatore. In modo esplicito, è possibile disabilitare questo controllo specificando il **/ convalidare-set di caratteri -** opzione.  
  
 Per impostazione predefinita, Visual Studio rileva un contrassegno di ordine dei byte per determinare se il file di origine è in un formato di codifica Unicode, ad esempio UTF-16 o UTF-8. Se viene individuato alcun indicatore di ordine dei byte, si presuppone che il file di origine viene codificato utilizzando la pagina di codice utente corrente, a meno che non è specificata una tabella codici **/utf-8** o **/source-charset** opzione. Visual Studio consente di salvare il codice sorgente C++ utilizzando una delle codifiche di caratteri diversi. Per informazioni sui set di caratteri di origine e di esecuzione, vedere [set di caratteri](../../cpp/character-sets.md) nella documentazione del linguaggio. Per un elenco di identificatori di pagina di codice è supportata e i nomi del set di caratteri, vedere [codice pagina identificatori](http://msdn.microsoft.com/library/windows/desktop/dd317756).  
  
 Visual Studio Usa UTF-8 per la codifica di caratteri interno durante la conversione tra il set di caratteri di origine e il set di caratteri di esecuzione. Se un carattere nel file di origine non può essere rappresentato nel set di caratteri di esecuzione, la conversione di UTF-8 sostituisce con un punto interrogativo '?' caratteri. Il **/validate-charset** opzione fa sì che la compilazione per restituire un avviso in questo caso.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione**, **C/C++**, **riga di comando** cartella.  
  
3.  In **opzioni avanzate**, aggiungere il **/validate-charset** opzione e specificare la codifica preferita.  
  
4.  Scegliere **OK** per salvare le modifiche.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [/Execution-CharSet (impostare esecuzione Character Set)](../../build/reference/execution-charset-set-execution-character-set.md)   
 [/Source-CharSet (impostare origine Character Set)](../../build/reference/source-charset-set-source-character-set.md)   
 [/utf/8 (imposta i set di caratteri eseguibili e di origine su UTF/8)](../../build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8.md)