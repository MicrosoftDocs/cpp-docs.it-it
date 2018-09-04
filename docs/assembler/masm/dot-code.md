---
title: .CODE | Microsoft Docs
ms.custom: ''
ms.date: 08/30/2018
ms.technology:
- cpp-masm
ms.topic: reference
f1_keywords:
- .CODE
dev_langs:
- C++
helpviewer_keywords:
- .CODE directive
ms.assetid: 2b8c882c-c0d2-4fa3-8335-e6b12717a4f4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ff2d66cfc79e84c8c4c7cf92e117c9ac8c84a555
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43682487"
---
# <a name="code"></a>.CODE

Se usato con [. MODELLO](../../assembler/masm/dot-model.md), indica l'inizio di un segmento di codice.

## <a name="syntax"></a>Sintassi

> . CODICE [[nome]]

#### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|`name`|Parametro facoltativo che specifica il nome del segmento di codice. Il nome predefinito è text per la piccola, piccola, compatto e flat [modelli](../../assembler/masm/dot-model.md). Il nome predefinito è *modulename*Text per altri modelli.|

## <a name="see-also"></a>Vedere anche

[Riferimento a direttive](../../assembler/masm/directives-reference.md)<br/>
[.DATA](../../assembler/masm/dot-data.md)<br/>