---
title: "Procedura dettagliata: creazione di un componente Windows Runtime di base mediante WRL | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 6e3f0986-7905-4f94-90e5-22c2ebfc8cd0
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura dettagliata: creazione di un componente Windows Runtime di base mediante WRL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo documento viene illustrato come utilizzare il [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] ([!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)]) per creare una semplice [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] componente. Il componente aggiunge due numeri e genera un evento quando il risultato è un numero primo. In questo documento viene inoltre illustrato come utilizzare il componente da un [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] app che utilizza JavaScript.  
  
## <a name="prerequisites"></a>Prerequisiti  
  
-   Esperienza con la [Windows Runtime](http://msdn.microsoft.com/library/windows/apps/br211377.aspx).  
  
-   Esperienza con COM.  
  
### <a name="to-create-a-basic-includewrttokenwrtmdmd-component-that-adds-two-numbers"></a>Creare una semplice [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] componente che aggiunge due numeri  
  
1.  In Visual Studio, creare un Visual C++ `WRLClassLibrary` progetto. Il documento [modello di progetto libreria di classi](../windows/wrl-class-library-project-template.md) viene descritto come scaricare il modello. Denominare il progetto `Contoso`.  
  
2.  In Contoso.cpp e Contoso.idl, sostituire tutte le istanze di "WinRTClass" con "Calculator".  
  
3.  In Contoso.idl, aggiungere il `Add` metodo per la `ICalculator` interfaccia.  
  
     [!code-cpp[wrl-basic-component#1](../windows/codesnippet/CPP/walkthrough-creating-a-basic-windows-runtime-component-using-wrl_1.idl)]  
  
4.  In Contoso.cpp, aggiungere il `Add` metodo il `public` sezione la `Calculator` classe.  
  
     [!code-cpp[wrl-basic-component#2](../windows/codesnippet/CPP/walkthrough-creating-a-basic-windows-runtime-component-using-wrl_2.cpp)]  
  
    > [!IMPORTANT]
    >  Poiché si sta creando un componente COM, è necessario utilizzare il `__stdcall` la convenzione di chiamata.  
  
     Si consiglia di utilizzare `_Out_` e altri origine annotazione (SAL) annotazioni per descrivere come una funzione utilizza i parametri. Le annotazioni SAL descrivono anche i valori restituiti Utilizzano le annotazioni SAL il [strumento di analisi del codice C/C++](../Topic/Code%20Analysis%20for%20C-C++%20Overview.md) per individuare possibili errori in C e C++ nel codice sorgente. Gli errori di codifica più comuni segnalati dallo strumento includono i sovraccarichi del buffer, memoria non inizializzata, le dereferenziazioni al puntatore null e perdite di memoria e risorse.  
  
### <a name="to-use-the-component-from-a-includewin8appnamelongtokenwin8appnamelongmdmd-app-that-uses-javascript"></a>Utilizzare il componente da un [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] app che utilizza JavaScript  
  
1.  In Visual Studio, aggiungere un nuovo JavaScript `Blank App` progetto per il `Contoso` soluzione. Denominare il progetto `CalculatorJS`.  
  
2.  Nel `CalculatorJS` del progetto, aggiungere un riferimento di `Contoso` progetto.  
  
3.  Nel file default. HTML, sostituire il `body` sezione con questi elementi dell'interfaccia Utente:  
  
     [!code-html[wrl-basic-component#3](../windows/codesnippet/Html/walkthrough-creating-a-basic-windows-runtime-component-using-wrl_3.html)]  
  
4.  In default. js, implementare il `OnClick` (funzione).  
  
     [!code-javascript[wrl-basic-component#4](../windows/codesnippet/JavaScript/walkthrough-creating-a-basic-windows-runtime-component-using-wrl_4.js)]  
  
    > [!NOTE]
    >  In JavaScript, alla prima lettera del nome di un metodo viene modificata in minuscola per rispettare le convenzioni di denominazione standard.  
  
### <a name="to-add-an-event-that-fires-when-a-prime-number-is-calculated"></a>Per aggiungere un evento che viene generato quando viene calcolato un numero primo  
  
1.  In Contoso.idl, prima della dichiarazione di `ICalculator`, definire il tipo di delegato, `PrimeNumberEvent`, che fornisce un `int` argomento.  
  
     [!code-cpp[wrl-basic-component#5](../windows/codesnippet/CPP/walkthrough-creating-a-basic-windows-runtime-component-using-wrl_5.idl)]  
  
     Quando si utilizza il `delegate` (parola chiave), il compilatore MIDL crea un'interfaccia che contiene un `Invoke` metodo che corrisponde alla firma del delegato. In questo esempio, il file generato Contoso_h.h definisce il `IPrimeNumberEvent` interfaccia, che viene utilizzato più avanti in questa procedura.  
  
     [!code-cpp[wrl-basic-component#13](../windows/codesnippet/CPP/walkthrough-creating-a-basic-windows-runtime-component-using-wrl_6.cpp)]  
  
2.  Nel `ICalculator` l'interfaccia, definire il `PrimeNumberFound` evento. Il `eventadd` e `eventremove` attributi specificano che il consumer del `ICalculator` interfaccia possibile sottoscrivere e annullare la sottoscrizione a questo evento.  
  
     [!code-cpp[wrl-basic-component#6](../windows/codesnippet/CPP/walkthrough-creating-a-basic-windows-runtime-component-using-wrl_7.idl)]  
  
3.  In Contoso.cpp, aggiungere un `private` [Microsoft::WRL::EventSource](../windows/eventsource-class.md) variabile membro per gestire i sottoscrittori di eventi e richiamare il gestore dell'evento.  
  
     [!code-cpp[wrl-basic-component#7](../windows/codesnippet/CPP/walkthrough-creating-a-basic-windows-runtime-component-using-wrl_8.cpp)]  
  
4.  In Contoso.cpp, implementare il `add_PrimeNumberFound` e `remove_PrimeNumberFound` metodi.  
  
     [!code-cpp[wrl-basic-component#8](../windows/codesnippet/CPP/walkthrough-creating-a-basic-windows-runtime-component-using-wrl_9.cpp)]  
  
### <a name="to-raise-the-event-when-a-prime-number-is-calculated"></a>Per generare l'evento quando viene calcolato un numero primo  
  
1.  In Contoso.cpp, aggiungere il `IsPrime` metodo il `private` sezione la `Calculator` classe.  
  
     [!code-cpp[wrl-basic-component#12](../windows/codesnippet/CPP/walkthrough-creating-a-basic-windows-runtime-component-using-wrl_10.cpp)]  
  
2.  Modificare il `Calculator`del `Add` metodo da chiamare il [Microsoft::WRL::EventSource::InvokeAll](../windows/eventsource-invokeall-method.md) metodo quando viene calcolato un numero primo.  
  
     [!code-cpp[wrl-basic-component#11](../windows/codesnippet/CPP/walkthrough-creating-a-basic-windows-runtime-component-using-wrl_11.cpp)]  
  
### <a name="to-handle-the-event-from-javascript"></a>Gestire l'evento da JavaScript  
  
1.  In default. HTML, modificare il `body` sezione includere un'area di testo che contiene i numeri primi.  
  
     [!code-html[wrl-basic-component#9](../windows/codesnippet/Html/walkthrough-creating-a-basic-windows-runtime-component-using-wrl_12.html)]  
  
2.  In default. js, modificare il `Add` funzione per gestire il `PrimeNumberFound` evento. Il gestore dell'evento aggiunge i numeri primi nell'area di testo che è stato definito dal passaggio precedente.  
  
     [!code-javascript[wrl-basic-component#10](../windows/codesnippet/JavaScript/walkthrough-creating-a-basic-windows-runtime-component-using-wrl_13.js)]  
  
    > [!NOTE]
    >  In JavaScript, i nomi degli eventi vengono convertiti in lettere minuscole e sono preceduti da "on" per rispettare le convenzioni di denominazione standard.  
  
 Nella figura seguente mostra l'applicazione Calcolatrice di base.  
  
 ![Applicazione Calcolatrice di base che usa JavaScript](../windows/media/wrl_basic_component.png "WRL_Basic_Component")  
  
## <a name="next-steps"></a>Passaggi successivi  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria modelli C++ di Windows Runtime (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)   
 [Modello di progetto libreria di classi](../windows/wrl-class-library-project-template.md)   
 [Strumento di analisi del codice C/C++](../Topic/Code%20Analysis%20for%20C-C++%20Overview.md)