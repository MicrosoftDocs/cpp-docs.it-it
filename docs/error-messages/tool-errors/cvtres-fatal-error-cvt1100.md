---
description: 'Altre informazioni su: errore irreversibile CVTRES CVT1100'
title: Errore irreversibile CVT1100 di CVTRES
ms.date: 11/04/2016
f1_keywords:
- CVT1100
helpviewer_keywords:
- CVT1100
ms.assetid: 886e88dd-5818-4b5f-84f2-d2a3d75f0aaf
ms.openlocfilehash: e54a3aeaf8b0b7955ab7e9cb7558c97a57fc95e0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97119736"
---
# <a name="cvtres-fatal-error-cvt1100"></a>Errore irreversibile CVT1100 di CVTRES

risorsa duplicata-tipo: tipo, nome: nome, lingua: lingua, flag: Flag, dimensioni: dimensioni

La risorsa specificata è stata specificata più di una volta.

È possibile ottenere questo errore se il linker sta creando una libreria dei tipi e non è stato specificato [/TLBID](../../build/reference/tlbid-specify-resource-id-for-typelib.md) e una risorsa nel progetto già USA 1. In questo caso, specificare/TLBID e specificare un altro numero fino a 65535.
