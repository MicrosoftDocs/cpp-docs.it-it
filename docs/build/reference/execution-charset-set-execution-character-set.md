---
title: -esecuzione-set di caratteri (Set di caratteri di esecuzione Set) | Documenti Microsoft
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
- execution-charset
- /execution-charset
dev_langs:
- C++
helpviewer_keywords:
- /execution-charset compiler option
- -execution-charset compiler option
ms.assetid: 0e02f487-2236-45bc-95f3-5760933a8f96
caps.latest.revision: 5
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 7cfb315c0dece0edc6228f70ed3900be80543cc7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="execution-charset-set-execution-character-set"></a>/Execution-CharSet (impostare esecuzione Character Set)
Consente di specificare caratteri di esecuzione impostato per il file eseguibile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/execution-charset:[IANA_name|.CPID]  
```  
  
## <a name="arguments"></a>Argomenti  
 **IANA_name**  
 Nome del set di caratteri definito dall'autorità IANA.  
  
 **CPID**  
 Identificatore della tabella codici.  
  
## <a name="remarks"></a>Note  
 È possibile utilizzare il **/execution-charset** opzione per specificare un set di caratteri di esecuzione. Il set di caratteri di esecuzione è la codifica utilizzata per il testo del programma in entrata alla fase di compilazione dopo che tutti i passaggi di pre-elaborazione. Questo set di caratteri viene utilizzato per la rappresentazione interna di qualsiasi stringa o valori letterali carattere nel codice compilato. Impostare questa opzione per specificare il set di caratteri di esecuzione esteso da utilizzare quando i file di origine includono caratteri non rappresentabili nel set di caratteri di esecuzione di base. È possibile utilizzare entrambi IANA o nome del set di caratteri ISO o un punto (.) seguito da un identificatore di pagina di codice decimale da 3 a 5 cifre per specificare il set di caratteri da utilizzare. Per un elenco di identificatori di pagina di codice è supportata e i nomi del set di caratteri, vedere [codice pagina identificatori](http://msdn.microsoft.com/library/windows/desktop/dd317756).  
  
 Per impostazione predefinita, Visual Studio rileva un contrassegno di ordine dei byte per determinare se il file di origine è in un formato di codifica Unicode, ad esempio UTF-16 o UTF-8. Se viene individuato alcun indicatore di ordine dei byte, si presuppone che il file di origine viene codificato utilizzando la pagina di codice utente corrente, a meno che non è stato specificato un set di caratteri nome o la tabella codici utilizzando il **/source-charset** opzione o **/utf-8** opzione. Visual Studio consente di salvare il codice sorgente C++ utilizzando una delle codifiche di caratteri diversi. Per informazioni sui set di caratteri di origine e di esecuzione, vedere [set di caratteri](../../cpp/character-sets2.md) nella documentazione del linguaggio.  
  
 Se si desidera impostare il set di caratteri di origine e il set di caratteri di esecuzione su UTF-8, è possibile utilizzare il **/utf-8** l'opzione del compilatore come collegamento. Equivale a specificare **/origine-charset:utf-/execution 8-charset:utf-8** nella riga di comando. Una di queste opzioni anche consente il **/validate-charset** opzione per impostazione predefinita.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione**, **C/C++**, **riga di comando** cartella.  
  
3.  In **opzioni avanzate**, aggiungere il **/execution-charset** opzione e specificare la codifica preferita.  
  
4.  Scegliere **OK** per salvare le modifiche.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [/Source-CharSet (impostare origine Character Set)](../../build/reference/source-charset-set-source-character-set.md)   
 [/UTF-8 (Imposta origine ed eseguibile set di caratteri UTF-8)](../../build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8.md)   
 [/Validate-CharSet (convalida per i caratteri compatibile)](../../build/reference/validate-charset-validate-for-compatible-characters.md)