---
title: '#Errore (direttiva) (C/C++) | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: '#error'
dev_langs: C++
helpviewer_keywords:
- '#error directive'
- preprocessor, directives
- error directive (#error directive)
ms.assetid: d550a802-ff19-4347-9597-688935d23b2b
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a14786834843046fc1e6cf551eaf95d1b28a8624
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="error-directive-cc"></a>Direttiva #error (C/C++)
La direttiva `#error` genera un messaggio di errore definito in fase di compilazione e quindi termina la compilazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#errortoken-string  
```  
  
## <a name="remarks"></a>Note  
 Il messaggio di errore che genera la direttiva include il *token-string* parametro. Il parametro `token-string` non è soggetto all'espansione di macro. Questa direttiva è molto utile durante la fase di pre-elaborazione per comunicare allo sviluppatore un'incoerenza di programma o la violazione di un vincolo. Nell'esempio seguente viene illustrata l'elaborazione di errore durante la fase di pre-elaborazione:  
  
```  
#if !defined(__cplusplus)  
#error C++ compiler required.  
#endif  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)