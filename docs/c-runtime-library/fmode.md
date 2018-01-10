---
title: _fmode | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- fmode
- _fmode
dev_langs: C++
helpviewer_keywords:
- file translation [C++], default mode
- fmode function
- _fmode function
ms.assetid: ac6df9eb-e5cc-4c54-aff3-373c21983118
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d4fdaeb0e67832f4f9e0c657e48fe74a88b86292
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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