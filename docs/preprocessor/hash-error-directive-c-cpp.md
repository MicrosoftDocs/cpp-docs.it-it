---
title: '#Errore (direttiva) (C/C++) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- '#error'
dev_langs:
- C++
helpviewer_keywords:
- '#error directive'
- preprocessor, directives
- error directive (#error directive)
ms.assetid: d550a802-ff19-4347-9597-688935d23b2b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ba4f0e06798bc6419f8db0471f19588039eb679a
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33905572"
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