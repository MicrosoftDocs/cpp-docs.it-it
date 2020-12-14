---
description: 'Altre informazioni su: vantaggi della portabilità dei set di caratteri'
title: Vantaggi della portabilità dei set di caratteri
ms.date: 11/04/2016
helpviewer_keywords:
- character sets [C++], benefits
- portability [C++], character sets
ms.assetid: bd60b925-1498-4e4f-897b-4c8ce66edcf7
ms.openlocfilehash: 32d78e6a230d664970e819f766d70beb1df52a88
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97187624"
---
# <a name="benefits-of-character-set-portability"></a>Vantaggi della portabilità dei set di caratteri

È possibile trarre vantaggio dall'utilizzo delle funzionalità di portabilità del runtime C e MFC anche se attualmente non si intende internazionalizzare l'applicazione:

- La codifica portabile rende la base di codice flessibile. In un secondo momento è possibile spostarlo facilmente in Unicode o MBCS.

- L'uso di Unicode rende le applicazioni per Windows più efficienti. Poiché Windows utilizza Unicode, è necessario tradurre le stringhe non Unicode passate da e verso il sistema operativo, il che comporta un sovraccarico.

## <a name="see-also"></a>Vedi anche

[Unicode e MBCS](../text/unicode-and-mbcs.md)<br/>
[Supporto per Unicode](../text/support-for-unicode.md)
