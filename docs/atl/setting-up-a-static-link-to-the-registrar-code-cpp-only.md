---
title: Impostazione di un collegamento statico al codice di Registrar (solo C++)
ms.date: 11/04/2016
helpviewer_keywords:
- statically linking to ATL Registrar code
- linking [C++], to ATL Registrar code
ms.assetid: 835f5885-87a6-48fa-91e6-60988ee65538
ms.openlocfilehash: b95bd17abca3237710956f3a1bf1b1d6fa9df51e
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62196666"
---
# <a name="setting-up-a-static-link-to-the-registrar-code-c-only"></a>Impostazione di un collegamento statico al codice di Registrar (solo C++)

I client di C++ è possono creare un collegamento statico al codice di registrazione. Collegamento statico del parser del Registrar aggiunge circa 5 KB a una build di rilascio.

Il modo più semplice per configurare il collegamento statico si presuppone di aver specificato [DECLARE_REGISTRY_RESOURCEID](reference/registry-macros.md#declare_registry_resourceid) nella dichiarazione dell'oggetto. (Questa è la specifica predefinita usata da ATL.)

## <a name="to-create-a-static-link-using-declareregistryresourceid"></a>Per creare un collegamento statico mediante DECLARE_REGISTRY_RESOURCEID

1. Specificare [/D](../build/reference/d-preprocessor-definitions.md)  **\_ATL\_statico\_registro** anziché **/D \_ATL\_DLL**.

1. RECOMPILE.

## <a name="see-also"></a>Vedere anche

[Registro di sistema ATL (Registrar)](../atl/atl-registry-component-registrar.md)
