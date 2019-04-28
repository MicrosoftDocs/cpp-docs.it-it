---
title: /Zc:externConstexpr (Enable extern constexpr variables)
ms.date: 02/28/2018
f1_keywords:
- /Zc:externConstexpr
helpviewer_keywords:
- -Zc:externConstexpr compiler option (C++)
- extern constexpr variables (C++)
ms.assetid: 4da5e33a-2e4d-4ed2-8616-bd8f43265c27
ms.openlocfilehash: 3c18a5310646ea39c0599f709e9fddc3990b7a2b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62315755"
---
# <a name="zcexternconstexpr-enable-extern-constexpr-variables"></a>/Zc:externConstexpr (Enable extern constexpr variables)

Il **/Zc:externConstexpr** l'opzione del compilatore indica al compilatore è conforme allo standard C++ e consentire un collegamento esterno per `constexpr` variabili. Per impostazione predefinita, Visual Studio offre sempre una `constexpr` collegamento interno della variabile, anche se si specifica il `extern` (parola chiave).

## <a name="syntax"></a>Sintassi

> **/Zc:externConstexpr**[**-**]

## <a name="remarks"></a>Note

Il **/Zc:externConstexpr** l'opzione del compilatore indica al compilatore di applicare un collegamento esterno per le variabili dichiarate utilizzando `extern constexpr`. Nelle versioni precedenti di Visual Studio e per impostazione predefinita o se **/Zc:externConstexpr-** è specificato, Visual Studio si applica un collegamento interno al `constexpr` anche se le variabili di `extern` parola chiave viene usata. Il **/Zc:externConstexpr** opzione è disponibile a partire da Visual Studio 2017 Update 15.6. ed è disattivata per impostazione predefinita. Il [/PERMISSIVE--](permissive-standards-conformance.md) non abilita l'opzione **/Zc:externConstexpr**.

Se un file di intestazione contiene una variabile dichiarata `extern constexpr`, deve essere contrassegnato [__declspec(selectany)](../../cpp/selectany.md) per unire le dichiarazioni duplicate in una sola istanza nel file binario collegato. In caso contrario, è possibile visualizzare gli errori del linker, ad esempio, LNK2005, per le violazioni della regola di definizione unica.

### <a name="to-set-this-compiler-option-in-visual-studio"></a>Per impostare questa opzione del compilatore in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **della riga di comando** pagina delle proprietà.

1. Aggiungere **/Zc:externConstexpr** oppure **/Zc:externConstexpr-** per il **opzioni aggiuntive:** riquadro.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](zc-conformance.md)<br/>
[Auto (parola chiave)](../../cpp/auto-keyword.md)
