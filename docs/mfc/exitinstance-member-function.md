---
description: 'Altre informazioni su: funzione membro ExitInstance'
title: Funzione membro ExitInstance
ms.date: 11/04/2016
f1_keywords: []
helpviewer_keywords:
- programs [MFC], terminating
- CWinApp class [MFC], ExitInstance
- ExitInstance method [MFC]
ms.assetid: 5bb597bd-8dab-4d49-8bcf-9c45aa8be4a2
ms.openlocfilehash: a469d29c6b8dc2b822928293ee3bd083ccce95e7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97314724"
---
# <a name="exitinstance-member-function"></a>Funzione membro ExitInstance

La funzione membro [ExitInstance](reference/cwinapp-class.md#exitinstance) della classe [CWinApp](reference/cwinapp-class.md) viene chiamata ogni volta che una copia dell'applicazione termina, in genere come conseguenza dell'arresto dell'applicazione da parte dell'utente.

Eseguire l'override `ExitInstance` se è necessaria un'elaborazione speciale per la pulizia, ad esempio la liberazione di risorse GDI (Graphics Device Interface) o la deallocazione della memoria usata durante l'esecuzione del programma. La pulizia di elementi standard, ad esempio documenti e visualizzazioni, viene tuttavia fornita dal Framework, con altre funzioni sottoponibili a override per eseguire operazioni di pulizia speciali specifiche per tali oggetti.

## <a name="see-also"></a>Vedi anche

[CWinApp: classe Application](cwinapp-the-application-class.md)
