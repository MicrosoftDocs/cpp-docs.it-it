---
title: .CODE
ms.date: 08/30/2018
f1_keywords:
- .CODE
helpviewer_keywords:
- .CODE directive
ms.assetid: 2b8c882c-c0d2-4fa3-8335-e6b12717a4f4
ms.openlocfilehash: a5b6608ca71a2b406c54a06cd44ac2865211a8ac
ms.sourcegitcommit: 9ee5df398bfd30a42739632de3e165874cb675c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/22/2019
ms.locfileid: "74398574"
---
# <a name="code"></a>.CODE

Se usato con [. MODEL](../../assembler/masm/dot-model.md), indica l'inizio di un segmento di codice.

## <a name="syntax"></a>Sintassi

> **.** *Nome*⟦ del codice ⟧

### <a name="parameters"></a>Parametri

*nome*\
Parametro facoltativo che specifica il nome del segmento di codice. Il nome predefinito è **_TEXT** per i [modelli](../../assembler/masm/dot-model.md)piccoli, piccoli, compatti e Flat. Il nome predefinito è *modulename*_TEXT per altri modelli.

## <a name="see-also"></a>Vedere anche

[Riferimento alle direttive](../../assembler/masm/directives-reference.md)\
[.DATA](../../assembler/masm/dot-data.md)
