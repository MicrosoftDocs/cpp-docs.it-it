---
title: Esportazione di classi di stringa usando CStringT | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- CStringT class, exporting strings
ms.assetid: bdfc441e-8d2a-461c-9885-46178066c09f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7510b1f44f49d17211c71419f4dde5a6e6a78974
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32356396"
---
# <a name="exporting-string-classes-using-cstringt"></a>Esportazione di classi di stringa usando CStringT
In passato, gli sviluppatori MFC è sono derivata da `CString` specializzare proprie classi di stringa. In Microsoft Visual C++ .NET (MFC 8.0), il [CString](../atl-mfc-shared/using-cstring.md) classe è stata sostituita da una classe di modello denominata [CStringT](../atl-mfc-shared/reference/cstringt-class.md). Questo fornito diversi vantaggi:  
  
-   È consentito l'operazione MFC `CString` classe viene utilizzata in ATL progetti senza eseguire il collegamento di libreria statica di MFC o DLL.  
  
-   Con il nuovo `CStringT` classe modello, è possibile personalizzare `CString` comportamento usando i parametri di modello che specificano i tratti di carattere, simili ai modelli nella libreria C++ Standard.  
  
-   Quando si esporta la propria classe di stringa da una DLL tramite `CStringT`, il compilatore Esporta automaticamente anche la `CString` classe di base. Poiché `CString` è essa stessa una classe modello, può essere creata dal compilatore quando utilizzata, a meno che il compilatore è in grado di riconoscere che `CString` viene importato da una DLL. Se sono stati migrati i progetti da Visual C++ 6.0 a Visual C++ .NET, potrebbe aver esaminato gli errori di simbolo del linker per un definito più volte `CString` a causa di conflitti del `CString` importato da una DLL e la versione locale di un'istanza. Il metodo migliore per eseguire questa operazione è descritta di seguito. Per ulteriori informazioni su questo problema, vedere l'articolo della Knowledge Base, "errori di collegamento quando si importano derivato CString classi" (Q309801) nella [ http://support.microsoft.com/default.aspx ](http://support.microsoft.com/default.aspx).  
  
 Lo scenario seguente provocherà al linker di generare errori di simbolo per classi definite più volte. Si supponga che si sta esportando un `CString`-classe derivata (`CMyString`) da una DLL di estensione MFC:  
  
 [!code-cpp[NVC_MFC_DLL#6](../atl-mfc-shared/codesnippet/cpp/exporting-string-classes-using-cstringt_1.cpp)]  
  
 Il codice consumer utilizza una combinazione di `CString` e `CMyString`. "MyString.h" non è incluso nell'intestazione precompilata e alcuni utilizzo della `CString` privo di `CMyString` visibile.  
  
 Si supponga di utilizzare il `CString` e `CMyString` classi nei file di origine distinta, Source1.cpp e Source2.cpp. In Source1.cpp, utilizzare `CMyString` e #include MyString.h. In Source2.cpp, utilizzare `CString`, ma non #include MyString.h. In questo caso, il linker verrà segnalare `CStringT` definito più volte. Ciò è dovuto `CString` essere importati dalla DLL che Esporta `CMyString`e creare un'istanza in locale dal compilatore tramite il `CStringT` modello.  
  
 Per risolvere questo problema, eseguire le operazioni seguenti:  
  
 Esportare `CStringA` e `CStringW` (e le classi di base necessarie) da MFC90. DLL. Progetti che includono MFC userà sempre la DLL di MFC esportata `CStringA` e `CStringW`, come nelle precedenti implementazioni di MFC.  
  
 Quindi creare una classe derivata esportabile utilizzando il `CStringT` modello, come `CStringT_Exported` è inferiore, ad esempio:  
  
 [!code-cpp[NVC_MFC_DLL#7](../atl-mfc-shared/codesnippet/cpp/exporting-string-classes-using-cstringt_2.cpp)]  
  
 In afxstr. H, sostituire il precedente `CString`, `CStringA`, e `CStringW` TypeDef come indicato di seguito:  
  
 [!code-cpp[NVC_MFC_DLL#8](../atl-mfc-shared/codesnippet/cpp/exporting-string-classes-using-cstringt_3.cpp)]  
  
 Esistono diversi aspetti:  
  
-   Non è consigliabile esportare `CStringT` stesso perché si verificheranno i progetti ATL sola esportare un tipo specializzato `CStringT` classe.  
  
-   Utilizzando un esportabile derivata da `CStringT` riduce al minimo la necessità di implementare nuovamente `CStringT` funzionalità. Codice aggiuntivo è limitato ai costruttori per l'inoltro di `CStringT` classe di base.  
  
-   `CString`, `CStringA`, e `CStringW` devono essere contrassegnate solo `__declspec(dllexport/dllimport)` DLL quando si compila con MFC condivisa. Se il collegamento con una libreria statica di MFC, è necessario contrassegnare queste classi non esportati; utilizzare in caso contrario, interna di `CString`, `CStringA`, e `CStringW` all'interno di DLL dell'utente verranno contrassegnate `CString` esportati anche.  
  
## <a name="related-topics"></a>Argomenti correlati  
 [Classe CStringT](../atl-mfc-shared/reference/cstringt-class.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzando CStringT](../atl-mfc-shared/using-cstringt.md)   
 [Uso di CString](../atl-mfc-shared/using-cstring.md)

