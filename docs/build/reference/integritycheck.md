---
title: /INTEGRITYCHECK | Documenti Microsoft
ms.custom: 
ms.date: 12/28/2017
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /INTEGRITYCHECK
dev_langs:
- C++
helpviewer_keywords:
- -INTEGRITYCHECK editbin options
- /INTEGRITYCHECK editbin options
- INTEGRITYCHECK editbin options
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 99caec18162a7506b8b7a467eb7374b6fe4a38d9
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="integritycheck"></a>/INTEGRITYCHECK

Specifica che la firma digitale di immagine binari deve essere controllata in fase di caricamento.

> **/INTEGRITYCHECK**[**: NO**]

## <a name="remarks"></a>Note

Nell'intestazione del file DLL o del file eseguibile, questa opzione imposta un flag che richiede una verifica della firma digitale dal gestore della memoria per caricare l'immagine di Windows. Versioni di Windows precedente a Windows Vista ignorano questo flag. Questa opzione deve essere impostata per le DLL a 64 bit che implementano il codice in modalità kernel ed sono consigliate per tutti i driver di dispositivo. Per ulteriori informazioni, vedere [requisiti di firma codice in modalità Kernel](/windows-hardware/drivers/install/kernel-mode-code-signing-requirements--windows-vista-and-later-).

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](../../build/reference/editbin-options.md)  
