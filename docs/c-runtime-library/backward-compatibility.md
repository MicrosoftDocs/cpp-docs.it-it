---
title: Backward Compatibility
description: Come usare Microsoft OLDNAMES. Libreria LIB per eseguire il mapping dei nomi delle funzioni per la compatibilità con le versioni precedenti.
ms.date: 11/04/2016
ms.topic: conceptual
helpviewer_keywords:
- CRT, compatibility
- backward compatibility, C run-time libraries
- compatibility, C run-time libraries
- backward compatibility
ms.assetid: cc3175cf-97fd-492f-b329-5791aea63090
ms.openlocfilehash: b09104a5cff4d8e4cc31f9cc4707e808988401d6
ms.sourcegitcommit: 9451db8480992017c46f9d2df23fb17b503bbe74
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2020
ms.locfileid: "91590290"
---
# <a name="backward-compatibility"></a>Backward Compatibility

Per la compatibilità tra le versioni di prodotto, la libreria OLDNAMES.LIB esegue il mapping dei nomi precedenti ai nuovi nomi. Ad esempio, viene eseguito il mapping di `open` a `_open`. È necessario collegarsi in modo esplicito a OLDNAMES.LIB solo quando si esegue la compilazione con le seguenti combinazioni di opzioni della riga di comando:

- `/Zl` (omettere il nome della libreria predefinita dal file oggetto) e `/Ze` (predefinito, utilizzare le estensioni Microsoft)

- `/link` (controllo linker), `/NOD` (nessuna ricerca di libreria predefinita) e `/Ze`

Per altre informazioni sulle opzioni della riga di comando del compilatore, vedere [Opzioni del compilatore](../build/reference/compiler-options.md).

## <a name="see-also"></a>Vedi anche

[Compatibilità](../c-runtime-library/compatibility.md)
