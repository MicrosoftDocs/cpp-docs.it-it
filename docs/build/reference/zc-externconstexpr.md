---
title: /Zc:externConstexpr (attiva le variabili constexpr extern) | Documenti Microsoft
ms.custom: 
ms.date: 02/28/2018
ms.technology:
- cpp-tools
ms.topic: article
f1_keywords:
- /Zc:externConstexpr
dev_langs:
- C++
helpviewer_keywords:
- -Zc:externConstexpr compiler option (C++)
- extern constexpr variables (C++)
ms.assetid: 4da5e33a-2e4d-4ed2-8616-bd8f43265c27
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 6597bc96609ab051df56886ccc580516986f97ed
ms.sourcegitcommit: eeb2b5ad8d3d22514a7b9bd7d756511b69ae0ccf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/15/2018
---
# <a name="zcexternconstexpr-enable-extern-constexpr-variables"></a>/Zc:externConstexpr (attiva le variabili constexpr extern)

Il **/Zc:externConstexpr** l'opzione del compilatore indica al compilatore è conforme allo standard C++ e consentire il collegamento esterno per `constexpr` variabili. Per impostazione predefinita, Visual Studio offre sempre un `constexpr` variabile collegamento interno, anche se si specifica il `extern` (parola chiave).

## <a name="syntax"></a>Sintassi

> **/Zc:externConstexpr**[**-**]

## <a name="remarks"></a>Note

Il **/Zc:externConstexpr** opzione del compilatore, il compilatore applicare un collegamento esterno per le variabili dichiarate utilizzando `extern constexpr`. Nelle versioni precedenti di Visual Studio e per impostazione predefinita o se **/Zc:externConstexpr-** è specificato, Visual Studio si applica il collegamento interno a `constexpr` anche se le variabili di `extern` parola chiave viene utilizzata. Il **/Zc:externConstexpr** opzione è disponibile a partire da Visual Studio 2017 aggiornamento 15,6. e viene disattivata per impostazione predefinita. Il [/ permissiva-](permissive-standards-conformance.md) opzione non consente **/Zc:externConstexpr**.

Se un file di intestazione contiene una variabile dichiarata `extern constexpr`, deve essere contrassegnato [__declspec(selectany)](../../cpp/selectany.md) per unire le dichiarazioni di duplicati in una singola istanza nel file binario collegato. In caso contrario, si verifichino errori del linker, ad esempio, LNK2005 per le violazioni della regola di definizione unica.

### <a name="to-set-this-compiler-option-in-visual-studio"></a>Per impostare questa opzione del compilatore in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **C/C++** > **riga di comando** pagina delle proprietà.

1. Aggiungere **/Zc:externConstexpr** o **/Zc:externConstexpr-** per il **opzioni aggiuntive:** riquadro.

## <a name="see-also"></a>Vedere anche

[/Zc (conformità)](../../build/reference/zc-conformance.md)  
[Auto (parola chiave)](../../cpp/auto-keyword.md)