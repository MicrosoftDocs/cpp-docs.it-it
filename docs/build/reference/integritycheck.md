---
title: /INTEGRITYCHECK | Microsoft Docs
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
ms.openlocfilehash: 062ce019fe1b622661be880d8a06eac9c5971103
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45709203"
---
# <a name="integritycheck"></a>/INTEGRITYCHECK

Specifica che la firma digitale di immagine binari deve essere controllata in fase di caricamento.

> **/INTEGRITYCHECK**[**: NO**]

## <a name="remarks"></a>Note

Nell'intestazione del file DLL o del file eseguibile, questa opzione imposta un flag che richiede una verifica della firma digitale dal gestore della memoria per caricare l'immagine in Windows. Le versioni di Windows precedenti a Windows Vista ignorano questo flag. Questa opzione deve essere impostata per le DLL a 64 bit che implementano il codice in modalità kernel ed sono consigliate per tutti i driver di dispositivo. Per altre informazioni, vedere [requisiti di firma del codice in modalità Kernel](/windows-hardware/drivers/install/kernel-mode-code-signing-requirements--windows-vista-and-later-).

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](../../build/reference/editbin-options.md)
