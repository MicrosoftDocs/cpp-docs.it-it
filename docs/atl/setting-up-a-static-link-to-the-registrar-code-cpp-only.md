---
title: Impostazione di un collegamento statico al codice di Registrar (solo C++)
ms.date: 11/04/2016
helpviewer_keywords:
- statically linking to ATL Registrar code
- linking [C++], to ATL Registrar code
ms.assetid: 835f5885-87a6-48fa-91e6-60988ee65538
ms.openlocfilehash: e5f09ce4626e030c43ecc30ca44d1ac738341c6c
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50557409"
---
# <a name="setting-up-a-static-link-to-the-registrar-code-c-only"></a>Impostazione di un collegamento statico al codice di Registrar (solo C++)

I client di C++ è possono creare un collegamento statico al codice di registrazione. Collegamento statico del parser del Registrar aggiunge circa 5 KB a una build di rilascio.

Il modo più semplice per configurare il collegamento statico si presuppone di aver specificato [DECLARE_REGISTRY_RESOURCEID](reference/registry-macros.md#declare_registry_resourceid) nella dichiarazione dell'oggetto. (Questa è la specifica predefinita usata da ATL.)

## <a name="to-create-a-static-link-using-declareregistryresourceid"></a>Per creare un collegamento statico mediante DECLARE_REGISTRY_RESOURCEID

1. Specificare [/D](../build/reference/d-preprocessor-definitions.md) `_ATL_STATIC_REGISTRY` anziché /D**ATL_DLL**.

1. RECOMPILE.

## <a name="see-also"></a>Vedere anche

[Registro di sistema ATL (Registrar)](../atl/atl-registry-component-registrar.md)
