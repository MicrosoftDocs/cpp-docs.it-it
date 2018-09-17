---
title: Formato di immagine | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 3ca3654b-42fe-4253-9f2e-723644041aa0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0e69d1a7c62d4e9c52cc628f30f94c346d83647f
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45715416"
---
# <a name="image-format"></a>Formato immagine

Il formato immagine eseguibile è PE32 +. Le immagini eseguibili (DLL ed exe) sono limitate a una dimensione massima di 2 gigabyte, in modo relativo degli indirizzi con uno spostamento a 32 bit può essere utilizzato per indirizzare dati di immagine statica. Questi dati includono la tabella IAT, le costanti di stringa, dati statici globali e così via.

## <a name="see-also"></a>Vedere anche

[Convenzioni del software x64](../build/x64-software-conventions.md)