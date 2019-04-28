---
title: Esportazione di classi String tramite CStringT
ms.date: 11/04/2016
helpviewer_keywords:
- CStringT class, exporting strings
ms.assetid: bdfc441e-8d2a-461c-9885-46178066c09f
ms.openlocfilehash: a4ee73d2ae5cfb7bf9834fb23eed8470b7d29445
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62252740"
---
# <a name="exporting-string-classes-using-cstringt"></a>Esportazione di classi String tramite CStringT

In passato, gli sviluppatori MFC è sono derivata dalla `CString` specializzare le proprie classi di stringa. In Microsoft Visual C++ .NET (MFC 8.0), il [CString](../atl-mfc-shared/using-cstring.md) classe è stata sostituita da una classe di modello denominata [CStringT](../atl-mfc-shared/reference/cstringt-class.md). In questo forniti numerosi vantaggi:

- È consentito il MFC `CString` classe da utilizzare in ATL progetti senza collegamento il più grande libreria statica di MFC o DLL.

- Con la nuova `CStringT` classe di modello, è possibile personalizzare `CString` comportamento usando i parametri di modello che specificano i tratti di carattere, simili ai modelli nella libreria Standard C++.

- Quando si esporta la propria classe di stringa da una DLL mediante `CStringT`, il compilatore Esporta automaticamente anche il `CString` classe di base. Poiché `CString` è una classe modello, a sua volta può essere creata dal compilatore quando usato, a meno che il compilatore è consapevole che `CString` viene importata da una DLL. Se si sono stati migrati i progetti di Visual C++ 6.0 a Visual C++ .NET, si potrebbero aver visto gli errori di simbolo del linker per un definito `CString` a causa di collisioni del `CString` importata da una DLL e la versione localmente un'istanza. Il metodo migliore per eseguire questa operazione è descritta di seguito.

Lo scenario seguente provocherà il linker per produrre gli errori di simbolo per classi definite più volte. Si supponga che si sta esportando un `CString`-classe derivata (`CMyString`) da una DLL di estensione MFC:

[!code-cpp[NVC_MFC_DLL#6](../atl-mfc-shared/codesnippet/cpp/exporting-string-classes-using-cstringt_1.cpp)]

Il codice consumer utilizza una combinazione di `CString` e `CMyString`. "MyString.h" non è incluso nell'intestazione precompilata e alcune utilizzo delle `CString` non ha `CMyString` visibile.

Si supponga di utilizzare il `CString` e `CMyString` classi nel file di origine separato, Source1.cpp e Source2.cpp. In Source1.cpp, si usa `CMyString` e #include MyString.h. In Source2.cpp, si usa `CString`, ma non #include MyString.h. In questo caso, il linker ridire sui `CStringT` viene definito più volte. Ciò è dovuto `CString` essere importati dalla DLL che Esporta `CMyString`e creare un'istanza in locale dal compilatore tramite la `CStringT` modello.

Per risolvere questo problema, eseguire le operazioni seguenti:

Esportare `CStringA` e `CStringW` (e le classi di base necessarie) da MFC90. DLL. I progetti che includono MFC userà sempre la DLL di MFC esportata `CStringA` e `CStringW`, come in implementazioni precedenti di MFC.

Creare una classe derivata può essere esportata usando il `CStringT` modello, come `CStringT_Exported` è di sotto, ad esempio:

[!code-cpp[NVC_MFC_DLL#7](../atl-mfc-shared/codesnippet/cpp/exporting-string-classes-using-cstringt_2.cpp)]

In afxstr. H, sostituire il precedente `CString`, `CStringA`, e `CStringW` TypeDef come indicato di seguito:

[!code-cpp[NVC_MFC_DLL#8](../atl-mfc-shared/codesnippet/cpp/exporting-string-classes-using-cstringt_3.cpp)]

Ci sono alcuni aspetti:

- Non è consigliabile esportare `CStringT` stesso perché in questo modo i progetti ATL-only esportare un specializzato `CStringT` classe.

- Utilizzando un esportabile derivate dalla classe `CStringT` riduce al minimo la necessità di implementare nuovamente `CStringT` funzionalità. Codice aggiuntivo è limitato all'inoltro di costruttori per la `CStringT` classe di base.

- `CString`, `CStringA`, e `CStringW` debe marcar solo `__declspec(dllexport/dllimport)` DLL quando si compila con un MFC condivisa. Se il collegamento con una libreria statica di MFC, è necessario contrassegnare queste classi non esportati; utilizzare in caso contrario, interna di `CString`, `CStringA`, e `CStringW` all'interno di DLL dell'utente contrassegnerà `CString` esportati anche.

## <a name="related-topics"></a>Argomenti correlati

[Classe CStringT](../atl-mfc-shared/reference/cstringt-class.md)

## <a name="see-also"></a>Vedere anche

[Uso di CStringT](../atl-mfc-shared/using-cstringt.md)<br/>
[Uso di CString](../atl-mfc-shared/using-cstring.md)
