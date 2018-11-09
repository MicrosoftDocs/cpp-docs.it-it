---
title: Compatibilità con le versioni precedenti
ms.date: 11/04/2016
f1_keywords:
- c.programs
helpviewer_keywords:
- CRT, compatibility
- backward compatibility, C run-time libraries
- compatibility, C run-time libraries
- backward compatibility
ms.assetid: cc3175cf-97fd-492f-b329-5791aea63090
ms.openlocfilehash: d418a3450f22e53c8cb320f0a1a27c9f2e434c54
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50460554"
---
# <a name="backward-compatibility"></a>Compatibilità con le versioni precedenti

Per la compatibilità tra le versioni di prodotto, la libreria OLDNAMES.LIB esegue il mapping dei nomi precedenti ai nuovi nomi. Ad esempio, viene eseguito il mapping di `open` a `_open`. È necessario collegarsi in modo esplicito a OLDNAMES.LIB solo quando si esegue la compilazione con le seguenti combinazioni di opzioni della riga di comando:

- `/Zl` (omettere il nome della libreria predefinita dal file oggetto) e `/Ze` (predefinito, utilizzare le estensioni Microsoft)

- `/link` (controllo linker), `/NOD` (nessuna ricerca di libreria predefinita) e `/Ze`

Per altre informazioni sulle opzioni della riga di comando del compilatore, vedere [Opzioni del compilatore](../build/reference/compiler-options.md).

## <a name="see-also"></a>Vedere anche

[Compatibilità](../c-runtime-library/compatibility.md)