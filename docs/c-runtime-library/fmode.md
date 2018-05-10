---
title: _fmode | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- fmode
- _fmode
dev_langs:
- C++
helpviewer_keywords:
- file translation [C++], default mode
- fmode function
- _fmode function
ms.assetid: ac6df9eb-e5cc-4c54-aff3-373c21983118
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9dfb5343e7a9ab64b2a1bd5cdb6edea0821e1559
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="fmode"></a>_fmode
La variabile `_fmode` imposta la modalità di conversione di file predefinita per la conversione in modalità testo o binaria. Questa variabile globale è stata deprecata a favore delle versioni funzionali più sicure [_get_fmode](../c-runtime-library/reference/get-fmode.md) e [_set_fmode](../c-runtime-library/reference/set-fmode.md), che devono essere usate al posto della variabile globale. È dichiarata in Stdlib.h come segue.  
  
## <a name="syntax"></a>Sintassi  
  
```  
extern int _fmode;  
```  
  
## <a name="remarks"></a>Note  
 L'impostazione predefinita di `_fmode` è `_O_TEXT` per la conversione in modalità testo. `_O_BINARY` è l'impostazione per la modalità binaria.  
  
 È possibile modificare il valore di `_fmode` in tre modi:  
  
-   Collegamento con Binmode.obj. In questo modo, l'impostazione iniziale di `_fmode` cambia in `_O_BINARY`, causando l'apertura in modalità binaria di tutti i file tranne `stdin`, `stdout` e `stderr`.  
  
-   Chiamata a `_get_fmode` o `_set_fmode` per ottenere o impostare rispettivamente la variabile globale`_fmode`.  
  
-   Modifica del valore di `_fmode` impostandolo direttamente nel programma.  
  
## <a name="see-also"></a>Vedere anche  
 [Variabili globali](../c-runtime-library/global-variables.md)   
 [_get_fmode](../c-runtime-library/reference/get-fmode.md)   
 [_set_fmode](../c-runtime-library/reference/set-fmode.md)