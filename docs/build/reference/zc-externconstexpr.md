---
description: 'Altre informazioni su: `/Zc:externConstexpr` (Abilita variabili constExpr extern)'
title: /Zc:externConstexpr (Abilita le variabili constexpr esterne)
ms.date: 02/28/2018
f1_keywords:
- /Zc:externConstexpr
helpviewer_keywords:
- -Zc:externConstexpr compiler option (C++)
- extern constexpr variables (C++)
ms.assetid: 4da5e33a-2e4d-4ed2-8616-bd8f43265c27
ms.openlocfilehash: 5f3120ba467c70cde2d0deb6932e408a2cd688c8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97156125"
---
# <a name="zcexternconstexpr-enable-extern-constexpr-variables"></a>`/Zc:externConstexpr` (Abilita variabili constExpr extern)

L' **`/Zc:externConstexpr`** opzione del compilatore indica al compilatore di conformarsi allo standard C++ e di consentire il collegamento esterno per le **`constexpr`** variabili. Per impostazione predefinita, Visual Studio fornisce sempre un **`constexpr`** collegamento interno a una variabile, anche se si specifica la **`extern`** parola chiave.

## <a name="syntax"></a>Sintassi

> **`/Zc:externConstexpr`**[**`-`**]

## <a name="remarks"></a>Commenti

L' **`/Zc:externConstexpr`** opzione del compilatore fa in modo che il compilatore applichi il collegamento esterno a variabili dichiarate tramite `extern constexpr` . Nelle versioni precedenti di Visual Studio e per impostazione predefinita o se **`/Zc:externConstexpr-`** si specifica, Visual Studio applica il collegamento interno alle **`constexpr`** variabili anche se **`extern`** viene usata la parola chiave. L' **`/Zc:externConstexpr`** opzione è disponibile a partire dall'aggiornamento 15,6 di Visual Studio 2017. ed è disattivato per impostazione predefinita. L' [`/permissive-`](permissive-standards-conformance.md) opzione non abilita **`/Zc:externConstexpr`** .

Se un file di intestazione contiene una variabile dichiarata `extern constexpr` , deve essere contrassegnata per [`__declspec(selectany)`](../../cpp/selectany.md) unire le dichiarazioni duplicate in una singola istanza del binario collegato. In caso contrario, è possibile che vengano visualizzati errori del linker, ad esempio LNK2005, per le violazioni della regola a una definizione.

### <a name="to-set-this-compiler-option-in-visual-studio"></a>Per impostare questa opzione del compilatore in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la pagina delle proprietà di **configurazione** proprietà della riga di comando di  >  **c/C++**  >   .

1. Aggiungere **`/Zc:externConstexpr`** o **`/Zc:externConstexpr-`** al riquadro **Opzioni aggiuntive:** .

## <a name="see-also"></a>Vedi anche

[`/Zc` Conformità](zc-conformance.md)<br/>
[`auto` Parola chiave](../../cpp/auto-cpp.md)
