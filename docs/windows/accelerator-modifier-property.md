---
title: Proprietà Modifier tasti di scelta rapida (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Modifier property
ms.assetid: f05a9379-e037-4cfb-b6ef-d2c655bcfa7f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 793e02b4ac083d6fe84ba2cc76ee340bcf2484e9
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44316055"
---
# <a name="accelerator-modifier-property-c"></a>Proprietà Modifier tasti di scelta rapida (C++)

Di seguito sono le voci legali per la proprietà modificatore della tabella di tasti di scelta rapida.

|Valore|Descrizione|
|-----------|-----------------|
|**None**|Utente preme solo il **chiave** valore. Ciò viene utilizzato in modo più efficace con i valori ASCII/ANSI 001 tramite 026, che viene interpretato come ^ dalla alla ^ Z (CTRL + A e CTRL-Z).|
|**ALT**|L'utente deve premere il **Alt** chiave prima di **chiave** valore.|
|**CTRL**|L'utente deve premere il **Ctrl** chiave prima di **chiave** valore. Non è valida con tipo ASCII.|
|**MAIUSC**|L'utente deve premere il **Shift** chiave prima di **chiave** valore.|
|**Ctrl + Alt**|L'utente deve premere il **Ctrl** chiave e il **Alt** chiave prima il **chiave** valore. Non è valida con tipo ASCII.|
|**CTRL + MAIUSC**|L'utente deve premere il **Ctrl** chiave e il **MAIUSC** chiave prima il **chiave** valore. Non è valida con tipo ASCII.|
|**ALT + MAIUSC**|L'utente deve premere il **Alt** chiave e il **MAIUSC** chiave prima il **chiave** valore. Non è valida con tipo ASCII.|
|**Ctrl + Alt + Maiusc**|L'utente deve premere **Ctrl**, **Alt**, e **MAIUSC** prima il **chiave** valore. Non è valida con tipo ASCII.|

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Impostazione delle proprietà dei tasti di scelta rapida](../windows/setting-accelerator-properties.md)  
[Editor tasti di scelta rapida](../windows/accelerator-editor.md)