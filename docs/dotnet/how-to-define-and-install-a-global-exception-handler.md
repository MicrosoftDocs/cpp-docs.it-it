---
title: 'Procedura: definire e installare un gestore eccezioni globale | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- handlers, global
ms.assetid: dd88a812-3bc7-4ce8-8283-4b674c246534
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: b77e982e3668ca23ece2eeeb5c609d71b30dc908
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="how-to-define-and-install-a-global-exception-handler"></a>Procedura: definire e installare un gestore eccezioni globale
L'esempio di codice seguente viene illustrato come non gestite le eccezioni possono essere acquisite. Il modulo di esempio contiene un pulsante che, quando premuti, esegue un riferimento null, generare un'eccezione generata. Questa funzionalità rappresenta un errore di codice tipico. L'eccezione risulta viene intercettata dal gestore di eccezioni di livello di applicazione installato per la funzione principale.  
  
 Questa operazione viene eseguita associando un delegato per il <xref:System.Windows.Forms.Application.ThreadException> evento. In questo caso, le eccezioni successivi vengono quindi inviate al `App::OnUnhandled` metodo.  
  
## <a name="example"></a>Esempio  
  
```  
// global_exception_handler.cpp  
// compile with: /clr  
#using <system.dll>  
#using <system.drawing.dll>  
#using <system.windows.forms.dll>  
  
using namespace System;  
using namespace System::Threading;  
using namespace System::Drawing;  
using namespace System::Windows::Forms;  
  
ref class MyForm : public Form  
{  
   Button^ b;  
public:  
   MyForm( )  
   {  
      b = gcnew Button( );  
      b->Text = "Do Null Access";  
      b->Size = Drawing::Size(150, 30);  
      b->Click += gcnew EventHandler(this, &MyForm::OnClick);  
      Controls->Add(b);  
   }  
   void OnClick(Object^ sender, EventArgs^ args)   
   {  
      // do something illegal, like call through a null pointer...  
      Object^ o = nullptr;  
      o->ToString( );        
   }  
};  
  
ref class App  
{  
public:  
   static void OnUnhandled(Object^ sender, ThreadExceptionEventArgs^ e)  
   {  
      MessageBox::Show(e->Exception->Message, "Global Exeception");  
      Application::ExitThread( );  
   }  
};  
  
int main()  
{  
   Application::ThreadException += gcnew   
      ThreadExceptionEventHandler(App::OnUnhandled);  
  
   MyForm^ form = gcnew MyForm( );  
   Application::Run(form);  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni](../windows/exception-handling-cpp-component-extensions.md)