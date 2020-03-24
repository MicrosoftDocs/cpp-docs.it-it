---
title: Errore irreversibile CVT1100 di CVTRES
ms.date: 11/04/2016
f1_keywords:
- CVT1100
helpviewer_keywords:
- CVT1100
ms.assetid: 886e88dd-5818-4b5f-84f2-d2a3d75f0aaf
ms.openlocfilehash: b7e67df24d41b1e8826673146fcc27fd93d143fd
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80196547"
---
# <a name="cvtres-fatal-error-cvt1100"></a>Errore irreversibile CVT1100 di CVTRES

risorsa duplicata-tipo: tipo, nome: nome, lingua: lingua, flag: Flag, dimensioni: dimensioni

La risorsa specificata è stata specificata più di una volta.

È possibile ottenere questo errore se il linker sta creando una libreria dei tipi e non è stato specificato [/TLBID](../../build/reference/tlbid-specify-resource-id-for-typelib.md) e una risorsa nel progetto già USA 1. In questo caso, specificare/TLBID e specificare un altro numero fino a 65535.
