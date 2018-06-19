---
title: Errore ML irreversibile A1017 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-masm
ms.topic: error-reference
f1_keywords:
- A1017
dev_langs:
- C++
helpviewer_keywords:
- A1017
ms.assetid: bef0b312-5431-4e5a-b637-c19919acf01b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c5fcb2d921a40b35c6022b2aca1e22adc2d8c45e
ms.sourcegitcommit: dbca5fdd47249727df7dca77de5b20da57d0f544
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/28/2018
ms.locfileid: "32054683"
---
# <a name="ml-fatal-error-a1017"></a>Errore ML irreversibile A1017
**manca un nome di file di origine**  
  
 Machine Learning non è riuscito a trovare un file per assemblare o passare al linker.  
  
 Questo errore viene generato quando si assegnano le opzioni della riga di comando ML senza specificare un nome di file per eseguire un'azione. Per assemblare i file che non contengono un'estensione asm, utilizzare il **/Ta** opzione della riga di comando.  
  
 Questo errore può essere generato anche richiamando ML senza parametri, se la variabile di ambiente ML contiene le opzioni della riga di comando.  
  
## <a name="see-also"></a>Vedere anche  
 [Messaggi di errore ML](../../assembler/masm/ml-error-messages.md)