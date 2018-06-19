---
title: /INTEGRITYCHECK | Documenti Microsoft
ms.custom: ''
ms.date: 12/28/2017
ms.technology:
- cpp-tools
ms.topic: reference
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
ms.workload:
- cplusplus
ms.openlocfilehash: 4b0adf9add2d191ae89aec0a5d756ade8e9f7725
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32370248"
---
# <a name="integritycheck"></a>/INTEGRITYCHECK

Specifica che la firma digitale di immagine binari deve essere controllata in fase di caricamento.

> **/INTEGRITYCHECK**[**: NO**]

## <a name="remarks"></a>Note

Nell'intestazione del file DLL o del file eseguibile, questa opzione imposta un flag che richiede una verifica della firma digitale dal gestore della memoria per caricare l'immagine di Windows. Versioni di Windows precedente a Windows Vista ignorano questo flag. Questa opzione deve essere impostata per le DLL a 64 bit che implementano il codice in modalità kernel ed sono consigliate per tutti i driver di dispositivo. Per ulteriori informazioni, vedere [requisiti di firma codice in modalità Kernel](/windows-hardware/drivers/install/kernel-mode-code-signing-requirements--windows-vista-and-later-).

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](../../build/reference/editbin-options.md)  
