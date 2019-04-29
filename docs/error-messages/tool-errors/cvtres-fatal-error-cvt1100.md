---
title: Errore irreversibile CVT1100 di CVTRES
ms.date: 11/04/2016
f1_keywords:
- CVT1100
helpviewer_keywords:
- CVT1100
ms.assetid: 886e88dd-5818-4b5f-84f2-d2a3d75f0aaf
ms.openlocfilehash: c7e65ccc79852ec99dd2406398fe1b3cdecacde7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62406275"
---
# <a name="cvtres-fatal-error-cvt1100"></a>Errore irreversibile CVT1100 di CVTRES

risorsa duplicata, tipo: tipo, nome: nome, language: lingua, flag: flag, dimensioni: dimensioni

La risorsa è stata specificata più volte.

Questo errore può verificarsi se il linker è la creazione di una libreria dei tipi e non è stato specificato [/TLBID](../../build/reference/tlbid-specify-resource-id-for-typelib.md) e una risorsa nel progetto usa già 1. In questo caso, specificare /TLBID e specificare un altro numero fino a 65535.