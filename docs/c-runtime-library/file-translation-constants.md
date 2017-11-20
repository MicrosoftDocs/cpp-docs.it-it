---
title: Costanti di conversione di file | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: c.constants.file
dev_langs: C++
helpviewer_keywords:
- translation constants
- file translation [C++], constants
- translation, file translation constants
- translation, constants
- constants [C++], file translation mode
- file translation [C++]
ms.assetid: 49b13bf3-442e-4d19-878b-bd1029fa666a
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: a68c41793ea96a840a78e76e5b2a222f0b06a583
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="file-translation-constants"></a>Costanti di conversione di file
## <a name="syntax"></a>Sintassi  
  
```  
  
#include <stdio.h>  
```  
  
## <a name="remarks"></a>Note  
 Queste costanti specificano la modalità di conversione (**"b"** o **"t"**). La modalità è inclusa nella stringa che specifica il tipo di accesso (**"r"**, **"w"**, **"a"**, **"r+"**, **"w+"**, **"a+"**).  
  
 Le modalità di conversione sono le seguenti:  
  
 **t**  
 Apre in modalità testo (convertita). In questa modalità, le combinazioni ritorno a capo/avanzamento di riga (CR-LF) vengono convertite in singoli avanzamenti di riga (LF) al momento dell'input e i caratteri di avanzamento riga vengono convertiti in combinazioni di ritorno a capo-avanzamento di riga (CR-LF) al momento dell'output. Inoltre, CTRL+Z viene interpretato nell'input come carattere di fine file. Nei file aperti per la lettura o lettura/scrittura, `fopen` verifica la presenza della combinazione CTRL+Z alla fine del file e la rimuove, se possibile. Questa operazione viene eseguita perché l'utilizzo delle funzioni `fseek` e `ftell` per spostarsi all'interno di un file che terminano con CTRL+Z può causare un comportamento non corretto di `fseek` in prossimità della fine del file.  
  
> [!NOTE]
>  L'opzione **t** non fa parte dello standard ANSI per `fopen` e `freopen`. È un'estensione Microsoft e non deve essere utilizzata dove si desidera la portabilità ANSI.  
  
 **b**  
 Apre in modalità binaria (non convertita). Le conversioni precedenti vengono eliminate.  
  
 Se **t** o **b** non è specificato in *mode*, la modalità di conversione è definita dalla variabile globale [_fmode](../c-runtime-library/fmode.md) della modalità predefinita. Per altre informazioni sull'uso delle modalità di testo e binaria, vedere [I/O file in modalità testo e binaria](../c-runtime-library/text-and-binary-mode-file-i-o.md).  
  
## <a name="see-also"></a>Vedere anche  
 [_fdopen, _wfdopen](../c-runtime-library/reference/fdopen-wfdopen.md)   
 [fopen, _wfopen](../c-runtime-library/reference/fopen-wfopen.md)   
 [freopen, _wfreopen](../c-runtime-library/reference/freopen-wfreopen.md)   
 [_fsopen, _wfsopen](../c-runtime-library/reference/fsopen-wfsopen.md)   
 [Costanti globali](../c-runtime-library/global-constants.md)