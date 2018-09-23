---
title: Compatibilità con le versioni precedenti | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- c.programs
dev_langs:
- C++
helpviewer_keywords:
- CRT, compatibility
- backward compatibility, C run-time libraries
- compatibility, C run-time libraries
- backward compatibility
ms.assetid: cc3175cf-97fd-492f-b329-5791aea63090
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f3056b90f3c6f0f62158a9b6dcfe145cda9740c6
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46092193"
---
# <a name="backward-compatibility"></a>Compatibilità con le versioni precedenti

Per la compatibilità tra le versioni di prodotto, la libreria OLDNAMES.LIB esegue il mapping dei nomi precedenti ai nuovi nomi. Ad esempio, viene eseguito il mapping di `open` a `_open`. È necessario collegarsi in modo esplicito a OLDNAMES.LIB solo quando si esegue la compilazione con le seguenti combinazioni di opzioni della riga di comando:

- `/Zl` (omettere il nome della libreria predefinita dal file oggetto) e `/Ze` (predefinito, utilizzare le estensioni Microsoft)

- `/link` (controllo linker), `/NOD` (nessuna ricerca di libreria predefinita) e `/Ze`

Per altre informazioni sulle opzioni della riga di comando del compilatore, vedere [Opzioni del compilatore](../build/reference/compiler-options.md).

## <a name="see-also"></a>Vedere anche

[Compatibilità](../c-runtime-library/compatibility.md)