---
title: /Zc:externConstexpr (Abilita le variabili constexpr)
ms.date: 02/28/2018
f1_keywords:
- /Zc:externConstexpr
helpviewer_keywords:
- -Zc:externConstexpr compiler option (C++)
- extern constexpr variables (C++)
ms.assetid: 4da5e33a-2e4d-4ed2-8616-bd8f43265c27
ms.openlocfilehash: a9efa2fa191cbdda99e057ac9329d79bc598743c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50510695"
---
# <a name="zcexternconstexpr-enable-extern-constexpr-variables"></a>/Zc:externConstexpr (Abilita le variabili constexpr)

Il **/Zc:externConstexpr** l'opzione del compilatore indica al compilatore è conforme allo standard C++ e consentire un collegamento esterno per `constexpr` variabili. Per impostazione predefinita, Visual Studio offre sempre una `constexpr` collegamento interno della variabile, anche se si specifica il `extern` (parola chiave).

## <a name="syntax"></a>Sintassi

> **/Zc:externConstexpr**[**-**]

## <a name="remarks"></a>Note

Il **/Zc:externConstexpr** l'opzione del compilatore indica al compilatore di applicare un collegamento esterno per le variabili dichiarate utilizzando `extern constexpr`. Nelle versioni precedenti di Visual Studio e per impostazione predefinita o se **/Zc:externConstexpr-** è specificato, Visual Studio si applica un collegamento interno al `constexpr` anche se le variabili di `extern` parola chiave viene usata. Il **/Zc:externConstexpr** opzione è disponibile a partire da Visual Studio 2017 Update 15.6. ed è disattivata per impostazione predefinita. Il [/PERMISSIVE--](permissive-standards-conformance.md) non abilita l'opzione **/Zc:externConstexpr**.

Se un file di intestazione contiene una variabile dichiarata `extern constexpr`, deve essere contrassegnato [__declspec(selectany)](../../cpp/selectany.md) per unire le dichiarazioni duplicate in una sola istanza nel file binario collegato. In caso contrario, è possibile visualizzare gli errori del linker, ad esempio, LNK2005, per le violazioni della regola di definizione unica.

### <a name="to-set-this-compiler-option-in-visual-studio"></a>Per impostare questa opzione del compilatore in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Aggiungere **/Zc:externConstexpr** oppure **/Zc:externConstexpr-** per il **opzioni aggiuntive:** riquadro.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)<br/>
[Auto (parola chiave)](../../cpp/auto-keyword.md)