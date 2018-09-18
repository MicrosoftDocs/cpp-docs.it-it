---
title: Errore irreversibile CVT1100 di CVTRES | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- CVT1100
dev_langs:
- C++
helpviewer_keywords:
- CVT1100
ms.assetid: 886e88dd-5818-4b5f-84f2-d2a3d75f0aaf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 18a5508301c54637fb34a751c8f1c4e307e47d50
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46068962"
---
# <a name="cvtres-fatal-error-cvt1100"></a>Errore irreversibile CVT1100 di CVTRES

risorsa duplicata, tipo: tipo, nome: nome, language: lingua, flag: flag, dimensioni: dimensioni

La risorsa è stata specificata più volte.

Questo errore può verificarsi se il linker è la creazione di una libreria dei tipi e non è stato specificato [/TLBID](../../build/reference/tlbid-specify-resource-id-for-typelib.md) e una risorsa nel progetto usa già 1. In questo caso, specificare /TLBID e specificare un altro numero fino a 65535.