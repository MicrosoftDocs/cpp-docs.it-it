---
title: -esecuzione-charset (Set esecuzione Character Set) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp
- devlang-cpp
ms.topic: reference
f1_keywords:
- execution-charset
- /execution-charset
dev_langs:
- C++
helpviewer_keywords:
- /execution-charset compiler option
- -execution-charset compiler option
ms.assetid: 0e02f487-2236-45bc-95f3-5760933a8f96
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 02f3e4273e9fc4064b26c6e32d708c4e6d586ae1
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43212672"
---
# <a name="execution-charset-set-execution-character-set"></a>/Execution-CharSet (set esecuzione Set di caratteri)
Consente di specificare caratteri di esecuzione impostati per il file eseguibile.  
  
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
 È possibile usare la **/execution-charset** opzione per specificare un set di caratteri di esecuzione. Il set di caratteri di esecuzione è la codifica usata per il testo del programma che viene eseguito l'input per la fase di compilazione dopo che tutti i passaggi di pre-elaborazione. Questo set di caratteri viene utilizzato per la rappresentazione interna di valori letterali stringa o un carattere nel codice compilato. Impostare questa opzione per specificare il set di caratteri di esecuzione estesa da utilizzare quando i file di origine contengono caratteri che non sono rappresentabili nel set di caratteri di esecuzione di base. È possibile usare entrambi IANA o nome del set di caratteri ISO o un punto (.) seguito da un identificatore della tabella codici decimale da 3 a 5 cifre per specificare il set di caratteri da usare. Per un elenco di identificatori di pagina di codice è supportata e i nomi dei set di caratteri, vedere [identificatori di pagina codice](/windows/desktop/Intl/code-page-identifiers).  
  
 Per impostazione predefinita, Visual Studio rileva un contrassegno di ordine dei byte per determinare se il file di origine è in un formato con codifica Unicode, ad esempio UTF-16 o UTF-8. Se viene individuato alcun indicatore ordine byte, si presuppone che il file di origine viene codificato utilizzando la tabella codici utente corrente, a meno che non è stato specificato un set di caratteri nome o la tabella codici con il **/source-charset** opzione o **/utf-8** opzione. Visual Studio consente di salvare il codice sorgente C++, utilizzando una delle diverse codifiche di caratteri. Per informazioni sui set di caratteri di origine e di esecuzione, vedere [set di caratteri](../../cpp/character-sets.md) nella documentazione del linguaggio.  
  
 Se si desidera impostare il set di caratteri di origine e il set di caratteri di esecuzione su UTF-8, è possibile usare la **/utf-8** l'opzione del compilatore come collegamento. Equivale a specificare **/Source -charset:utf-/execution 8-charset:utf-8** nella riga di comando. Una di queste opzioni anche Abilita il **/Validate/CharSet** opzione per impostazione predefinita.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Espandere la **le proprietà di configurazione**, **C/C++**, **riga di comando** cartella.  
  
3.  Nelle **opzioni avanzate**, aggiungere il **/execution-charset** opzione e specificare la codifica preferita.  
  
4.  Scegli **OK** per salvare le modifiche.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [/Source-CharSet (Imposta origine Set di caratteri)](../../build/reference/source-charset-set-source-character-set.md)   
 [/UTF-8 (eseguibili e imposta origine set di caratteri UTF-8)](../../build/reference/utf-8-set-source-and-executable-character-sets-to-utf-8.md)   
 [/validate/charset (convalida per i caratteri compatibili)](../../build/reference/validate-charset-validate-for-compatible-characters.md)