---
description: Altre informazioni su:/INTEGRITYCHECK
title: /INTEGRITYCHECK
ms.date: 12/28/2017
f1_keywords:
- /INTEGRITYCHECK
helpviewer_keywords:
- -INTEGRITYCHECK editbin options
- /INTEGRITYCHECK editbin options
- INTEGRITYCHECK editbin options
ms.openlocfilehash: b1ea8275bdb356febcf18a2a55b6ab718d8eea96
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97199662"
---
# <a name="integritycheck"></a>/INTEGRITYCHECK

Specifica che la firma digitale dell'immagine binaria deve essere controllata in fase di caricamento.

> **/INTEGRITYCHECK**[**: No**]

## <a name="remarks"></a>Commenti

Nell'intestazione del file DLL o del file eseguibile, questa opzione imposta un flag che richiede un controllo della firma digitale da parte del gestore della memoria per caricare l'immagine in Windows. Le versioni di Windows precedenti a Windows Vista ignorano questo flag. Questa opzione deve essere impostata per le dll a 64 bit che implementano il codice in modalità kernel ed è consigliata per tutti i driver di dispositivo. Per altre informazioni, vedere [requisiti per la firma del codice in modalità kernel](/windows-hardware/drivers/install/kernel-mode-code-signing-requirements--windows-vista-and-later-).

## <a name="see-also"></a>Vedi anche

[Opzioni di EDITBIN)](editbin-options.md)
