---
description: 'Altre informazioni su: esportazione di classi stringa con CStringt'
title: Esportazione di classi stringa con CStringt
ms.date: 11/04/2016
helpviewer_keywords:
- CStringT class, exporting strings
ms.assetid: bdfc441e-8d2a-461c-9885-46178066c09f
ms.openlocfilehash: 8876ea04f1252e4f5861a950b04dabcd99d6a804
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166993"
---
# <a name="exporting-string-classes-using-cstringt"></a>Esportazione di classi stringa con CStringt

In passato, gli sviluppatori MFC derivavano da `CString` per specializzare le proprie classi di stringa. In Microsoft Visual C++ .NET (MFC 8,0), la classe [CString](../atl-mfc-shared/using-cstring.md) è stata sostituita da una classe modello denominata [CStringT](../atl-mfc-shared/reference/cstringt-class.md). Questo ha fornito diversi vantaggi:

- È stata consentita l' `CString` utilizzo della classe MFC nei progetti ATL senza collegamenti nella libreria statica o dll più grande di MFC.

- Con la nuova `CStringT` classe modello, è possibile personalizzare il `CString` comportamento usando parametri di modello che specificano tratti di carattere, in modo analogo ai modelli nella libreria standard C++.

- Quando si esporta una classe String personalizzata da una DLL usando `CStringT` , il compilatore Esporta automaticamente anche la `CString` classe di base. Poiché `CString` è a sua volta una classe modello, è possibile crearne un'istanza dal compilatore quando viene usato, a meno che il compilatore non sia in grado di riconoscere che `CString` viene importato da una dll. Se è stata eseguita la migrazione di progetti da Visual C++ 6,0 a Visual C++ .NET, è possibile che siano stati rilevati errori relativi ai simboli del linker per un oggetto Multiply definito a `CString` causa della collisione dell'oggetto `CString` importato da una dll e della versione di cui è stata creata in locale. Il modo corretto per eseguire questa operazione è descritto di seguito.

Lo scenario seguente farà in modo che il linker produca errori di simbolo per le classi di moltiplicazione definite. Si supponga di esportare una `CString` classe derivata `CMyString` da () da una DLL di estensione MFC:

[!code-cpp[NVC_MFC_DLL#6](../atl-mfc-shared/codesnippet/cpp/exporting-string-classes-using-cstringt_1.cpp)]

Il codice consumer usa una combinazione di `CString` e `CMyString` . "String. h" non è incluso nell'intestazione precompilata e l'utilizzo di `CString` non è `CMyString` visibile.

Si supponga di usare le `CString` `CMyString` classi e in file di origine distinti, source1. cpp e source2. cpp. In source1. cpp usare `CMyString` e #include String. h. In source2. cpp usare `CString` , ma non #include String. h. In questo caso, il linker si lamenta per la `CStringT` definizione di moltiplicazione. Ciò è dovuto al `CString` fatto che sia importata dalla dll che esporta `CMyString` e di cui viene creata un'istanza localmente dal compilatore tramite il `CStringT` modello.

Per risolvere il problema, eseguire le operazioni seguenti:

Esportare `CStringA` e `CStringW` (e le classi base necessarie) da MFC90.DLL. I progetti che includono MFC utilizzeranno sempre la DLL MFC esportata `CStringA` e `CStringW` , come nelle implementazioni MFC precedenti.

Creare quindi una classe derivata esportabile usando il `CStringT` modello, come `CStringT_Exported` indicato di seguito, ad esempio:

[!code-cpp[NVC_MFC_DLL#7](../atl-mfc-shared/codesnippet/cpp/exporting-string-classes-using-cstringt_2.cpp)]

In AfxStr. h sostituire i typedef precedente `CString` , `CStringA` e `CStringW` come indicato di seguito:

[!code-cpp[NVC_MFC_DLL#8](../atl-mfc-shared/codesnippet/cpp/exporting-string-classes-using-cstringt_3.cpp)]

Esistono diverse avvertenze:

- Non è necessario esportare `CStringT` se stesso perché in questo modo i progetti solo ATL esportano una `CStringT` classe specializzata.

- L'uso di una classe derivata esportabile da `CStringT` riduce al minimo la necessità di implementare nuovamente la `CStringT` funzionalità. Il codice aggiuntivo è limitato ai costruttori di inoltri alla `CStringT` classe di base.

- `CString`, `CStringA` e `CStringW` devono essere contrassegnati solo `__declspec(dllexport/dllimport)` quando si compila con una DLL condivisa MFC. Se si esegue il collegamento con una libreria statica MFC, è consigliabile non contrassegnare queste classi come esportate. in caso contrario, l'utilizzo interno di `CString` , `CStringA` e delle `CStringW` dll utente all'interno di vengono contrassegnate `CString` come esportate.

## <a name="related-topics"></a>Argomenti correlati

[CStringt (classe)](../atl-mfc-shared/reference/cstringt-class.md)

## <a name="see-also"></a>Vedi anche

[Uso di CStringT](../atl-mfc-shared/using-cstringt.md)<br/>
[Uso di CString](../atl-mfc-shared/using-cstring.md)
