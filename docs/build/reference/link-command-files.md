---
title: File di comando LINK | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- link
dev_langs:
- C++
helpviewer_keywords:
- syntax, LINK command files
- command files [C++]
- LINK tool [C++]
- text files, passing arguments to LINK
- LINK tool [C++], command-line syntax
- command files [C++], LINK
ms.assetid: 7154511c-32b9-4e5b-a515-3922fa9de48e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6614af87f072c54353ead39c2c5ca789da18dbb8
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="link-command-files"></a>File di comando di LINK
È possibile passare argomenti della riga di comando di collegamento sotto forma di un file di comando. Per specificare un file di comando per il linker, utilizzare la sintassi seguente:  
  
```  
LINK @commandfile  
```  
  
 Il `commandfile` è il nome di un file di testo. Non è consentito alcun spazio o tabulazione tra il simbolo di chiocciola (@) e il nome del file. Non vi è alcuna estensione predefinita; è necessario specificare il nome completo, inclusa qualsiasi estensione. Non è possibile utilizzare caratteri jolly. Con il nome del file, è possibile specificare un percorso assoluto o relativo. COLLEGAMENTO non utilizza una variabile di ambiente per cercare il file.  
  
 Nel file di comando, gli argomenti possono essere separati da spazi o tabulazioni (come nella riga di comando) e caratteri di nuova riga.  
  
 È possibile specificare tutti o parte della riga di comando in un file di comando. È possibile utilizzare più di un file di comando in un comando di collegamento. COLLEGAMENTO accetta l'input del file di comando come se fosse specificato in questa posizione nella riga di comando. File di comando non possono essere annidati. COLLEGAMENTO restituisce il contenuto del file di comando, a meno che il [/NOLOGO](../../build/reference/nologo-suppress-startup-banner-linker.md) opzione specificata.  
  
## <a name="example"></a>Esempio  
 Il comando seguente per compilare una DLL passa i nomi dei file oggetto e librerie in file separati per comandi e Usa un terzo file di comando per specificare l'opzione /EXPORTS:  
  
```  
link /dll @objlist.txt @liblist.txt @exports.txt  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)