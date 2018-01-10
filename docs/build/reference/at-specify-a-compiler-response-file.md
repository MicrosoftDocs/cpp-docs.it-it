---
title: '@ (Specifica un File di risposta del compilatore) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: '@'
dev_langs: C++
helpviewer_keywords:
- response files, C/C++ compiler
- '@ compiler option'
- cl.exe compiler, specifying response files
ms.assetid: 400fffee-909d-4f60-bf76-45833e822685
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 698039e22a8c760097d009454db5a3872666729b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="-specify-a-compiler-response-file"></a>@ (Specifica un file di risposta del compilatore)
Specifica un file di risposta del compilatore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
@response_file  
```  
  
## <a name="arguments"></a>Argomenti  
 `response_file`  
 Un file di testo contenente i comandi del compilatore.  
  
## <a name="remarks"></a>Note  
 Un file di risposta può contenere qualsiasi comando specificato nella riga di comando. Questa operazione può essere utile se gli argomenti della riga di comando superano i 127 caratteri.  
  
 Non è possibile specificare il  **@**  opzione all'interno di un file di risposta. Vale a dire un file di risposta non è possibile incorporare un altro file di risposta.  
  
 Dalla riga di comando è possibile specificare il numero di opzioni file risposta (ad esempio, `@respfile.1 @respfile.2`) desiderato.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
-   Un file di risposta non può essere specificato da all'interno dell'ambiente di sviluppo e deve essere specificato nella riga di comando.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Impossibile modificare l'opzione del compilatore a livello di codice.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)