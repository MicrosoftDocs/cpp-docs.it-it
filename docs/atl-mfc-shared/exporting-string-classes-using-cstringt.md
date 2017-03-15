---
title: "Exporting String Classes Using CStringT | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStringT class, exporting strings"
ms.assetid: bdfc441e-8d2a-461c-9885-46178066c09f
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 11
---
# Exporting String Classes Using CStringT
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In passato, gli sviluppatori MFC derivati da `CString` per specializzare le proprie classi della stringa.  In Microsoft Visual C\+\+ .NET 8.0 \(MFC\), la classe [CString](../atl-mfc-shared/using-cstring.md) è stata sostituita da una classe modello denominata [CStringT](../atl-mfc-shared/reference/cstringt-class.md).  Ciò fornisce diversi vantaggi:  
  
-   Consentita la classe MFC `CString` da utilizzare nei progetti ATL senza collegamento in più grande libreria statica MFC o DLL.  
  
-   Con la nuova classe modello `CStringT`, è possibile personalizzare il comportamento `CString` utilizzo di parametri di modello che specificano i tratti di carattere, simili ai modelli nella libreria standard \(STL\) del modello.  
  
-   Quando si esporta una classe di stringa da una DLL mediante `CStringT`, il compilatore automaticamente anche esporta la classe base `CString`.  Poiché `CString` sia una classe modello, è possibile creare un'istanza dal compilatore quando viene utilizzata, a meno che il compilatore sia presente che `CString` viene incluso in una DLL.  Se è stata eseguita la migrazione di progetti da Visual C\+\+ 6,0 e Visual C\+\+ .NET, possono verificarsi errori del simbolo del linker per `CString` con più livelli definito a causa del conflitto `CString` importato da una DLL e dalla versione locale creata un'istanza.  La modalità corretta questo scopo viene descritta di seguito.  Per ulteriori informazioni su questo problema, vedere l'articolo della Knowledge Base, "collegando gli errori quando si importa le classi derivate CString\-" \(Q309801\) nel CD di MSDN Library o a [http:\/\/support.microsoft.com\/default.aspx](http://support.microsoft.com/default.aspx).  
  
 Lo scenario seguente modo il linker a generare errori del simbolo vengono moltiplicati per le classi definite.  Si supponga che si esportano `CString`nella classe derivata da \(`CMyString`\) da una DLL di estensione MFC:  
  
 [!code-cpp[NVC_MFC_DLL#6](../atl-mfc-shared/codesnippet/CPP/exporting-string-classes-using-cstringt_1.cpp)]  
  
 Il codice del consumer utilizza una combinazione `CString` e `CMyString`.    MyString.h" non è incluso nell'intestazione precompilata e un utilizzo `CString` non ha `CMyString` visibile.  
  
 Si supponga di utilizzare le classi `CMyString` e `CString` in file di origine distinti, Source1.cpp e Source2.cpp.  In Source1.cpp, utilizzare `CMyString` e il MyString.h \#include.  In Source2.cpp, utilizzare `CString`, ma non si MyString.h \#include.  In questo caso, il linker protesterà su `CStringT` che si moltiplica definito.  Ciò è dovuto a `CString` sia incluso dalla DLL che esporta `CMyString`che crea un'istanza di in locale dal compilatore tramite il modello `CStringT`.  
  
 Per risolvere questo problema, effettuare le operazioni seguenti:  
  
 Esportare `CStringA` e `CStringW` \(e le classi di base necessarie\) da MFC90.DLL.  I progetti che includono MFC utilizzano sempre `CStringA` esportato DLL MFC e `CStringW`, come nelle implementazioni precedenti MFC.  
  
 Creare quindi una classe derivata esportabile utilizzando il modello `CStringT`, mentre `CStringT_Exported` è sotto, ad esempio:  
  
 [!code-cpp[NVC_MFC_DLL#7](../atl-mfc-shared/codesnippet/CPP/exporting-string-classes-using-cstringt_2.cpp)]  
  
 In AfxStr.h, sostituire `CString`precedente, `CStringA`e i typedef `CStringW` come segue:  
  
 [!code-cpp[NVC_MFC_DLL#8](../atl-mfc-shared/codesnippet/CPP/exporting-string-classes-using-cstringt_3.cpp)]  
  
 Esistono alcune:  
  
-   Non è necessario esportare `CStringT` stesso perché in tal modo i progetti solo ATL esportare una classe specializzata `CStringT`.  
  
-   Utilizzando una classe derivata esportabile da `CStringT` si riduce devono funzionalità `CStringT` di dover implementare.  Il codice aggiuntivo è limitato a costruttori di inoltro alla classe base `CStringT`.  
  
-   `CString`, `CStringA`e `CStringW` devono essere solo `__declspec(dllexport/dllimport)` contrassegnata come quando si compila con una DLL condivisa di MFC.  Se il collegamento a una libreria statica MFC, non è necessario contrassegnare queste classi come esportate, in caso contrario, l'utilizzo interno `CString`, `CStringA`e `CStringW` nelle DLL dell'utente `CString` contrassegnato automaticamente come esportato anche.  
  
## Argomenti correlati  
 [CStringT Class](../atl-mfc-shared/reference/cstringt-class.md)  
  
## Vedere anche  
 [Using CStringT](../atl-mfc-shared/using-cstringt.md)   
 [Using CString](../atl-mfc-shared/using-cstring.md)