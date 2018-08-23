---
title: '#Errore (direttiva) (C/C++) | Microsoft Docs'
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
ms.openlocfilehash: d2da939fe52e41e122ecd4926e34fb9c4be735ae
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42543128"
---
# <a name="error-directive-cc"></a>Direttiva #error (C/C++)
Il **#error** direttiva genera un messaggio di errore specificato dall'utente in fase di compilazione e quindi termina la compilazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#errortoken-string  
```  
  
## <a name="remarks"></a>Note  
 
Il messaggio di errore che la direttiva genera include il *token-string* parametro. Il *token-string* parametro non è soggetto all'espansione di macro. Questa direttiva è molto utile durante la fase di pre-elaborazione per comunicare allo sviluppatore un'incoerenza di programma o la violazione di un vincolo. Nell'esempio seguente viene illustrata l'elaborazione di errore durante la fase di pre-elaborazione:  
  
```  
#if !defined(__cplusplus)  
#error C++ compiler required.  
#endif  
```  
  
## <a name="see-also"></a>Vedere anche  
 
[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)